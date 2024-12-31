#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 難題

struct employee {
	int id;
	char first_name[32];
	char last_name[32];
	int boss_id;
};
typedef struct employee Employee;
Employee employees[32];
int n, m; //n是輸入員工，m是幾個關係

//檢查 A(a_index) 是否是 B(b_index) 的下屬
int up_find(int a_index, int b_index) {
	if (a_index == -1) return 0; //沒上司
	if (employees[a_index].boss_id == employees[b_index].id) {
		return 1;
	}
	
	int boss_index = -1;
	for (int i = 0; i < n; i++) {
		if (employees[a_index].boss_id == employees[i].id) {
			boss_index = i;
			break;
		}
	}
	return up_find(boss_index, b_index);
}

//上司下屬關係反過來而已
int down_find(int a_index, int b_index) {
	return up_find(b_index, a_index);
}

int main()
{
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %s %s %d",
			&employees[i].id,
			&employees[i].first_name,
			&employees[i].last_name,
			&employees[i].boss_id
		);
	}

	

	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		char a_first[32], a_last[32]; //這兩行放輸入的名字
		char b_first[32], b_last[32];

		scanf("%s %s %s %s", a_first, a_last, b_first, b_last); //字串放字元陣列不用&

		int a_index = -1, b_index = -1;

		for (int j = 0; j < n; j++) {
			if (strcmp(employees[j].first_name, a_first) == 0 && //找要比較的名字在結構陣列的哪裡
				strcmp(employees[j].last_name, a_last) == 0)
			{
				a_index = j;
			}

			if (strcmp(employees[j].first_name, b_first) == 0 &&
				strcmp(employees[j].last_name, b_last) == 0)
			{
				b_index = j;
			}
		}

		up_find(a_index, b_index);
	}
}
//一開始寫的方法時間複雜度太高，要遍歷a跟b的所有上司情況，程式跑不出來//
