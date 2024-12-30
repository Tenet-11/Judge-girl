#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int result[500] = { 0 };
	int count = 0;
	while (1)
	{
		int player, round;
		int point[250000] = { 0 };
		int player_point_array[500] = { 0 };

		scanf("%d%d", &player, &round);

		if (player == 0 && round == 0) {
			break;
		}

		for (int i = 0; i < player * round; i++)
		{
			scanf("%d", &point[i]);
		}

		for (int i = 0; i < player; i++) //遍歷所有玩家
		{
			int player_point = 0;
			for (int j = i; j < player * round; j += player) //算某人每回合分數
			{
				player_point += point[j];
			}
			player_point_array[i] = player_point;
		}

		int max = 0;
		for (int i = 0; i < player; i++)
		{
			if (max <= player_point_array[i])
			{
				max = player_point_array[i];
				result[count] = i + 1; //為什麼是i+1
			}
		}
		count++;
	}

	for (int i = 0; i < count; i++)
	{
		printf("%d\n", result[i]); 
	}
}
