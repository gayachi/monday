#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int day[3],  yoyeel=0;
	scanf("%d%d%d", &day[0],&day[1],&day[2]);
	day[2] += (day[0]-1) / 4;
	day[2] -= (day[0]-1) / 400;
	day[2] += (day[0]-1) * 365;
	if (day[1] !=9) {
		if (day[1] > 2)
			day[2] += (((day[1] - 1) * 30) + (day[1] / 2)-2);
		else
			day[2] += ((day[1]-1)*31);
	}
	else
	{
		day[0] += (((day[1] - 1) * 30) + (day[1] / 2) - 2+1);
	}

	printf("%d\n", day[2]);
	yoyeel = (day[2]-1) % 7;
	switch (yoyeel) {
	case 0:
		printf("금요일");
		break;
	case 1:
		printf("토요일");
		break;
	case 2:
		printf("일요일");
		break;
	case 3:
		printf("월요일");
		break;
	case 4:
		printf("화요일");
		break;
	case 5:
		printf("수요일");
		break;
	case 6:
		printf("목요일");
		break;
	}
	scanf("%d");
}
