#include <stdio.h>

int main(void) {
	int year = 0, month = 0, day = 0;
	int start, last;
	int i;

	while(1){
		printf("��, ���� �Է��ϼ���(����� 0):");
		scanf("%d  %d", &year, &month);
		if (year == 0 || month == 0) break;
		
		for (i = 1; i < year; i++)
		{	

			/*
			if (i % 4 != 0) day += 365;
			else if (i % 100 != 0) day += 366;
			else if (i % 400 == 0) day += 366;
			else day += 365;
			*/
			
			if (i % 4 == 0) {
				if (i % 100 == 0 && i % 400 != 0) day += 365;
				else day += 366;
			}
			else day += 365;
			
		}
		
		
		
		switch (month - 1)
		{
		case 11: day += 30;
		case 10: day += 31;
		case  9: day += 30;
		case  8: day += 31;
		case  7: day += 31;
		case  6: day += 30;
		case  5: day += 31;
		case  4: day += 30;
		case  3: day += 31;
		case  2:
			/*
			if (year % 4 != 0) total += 28;
			else if (year % 100 != 0) total += 29;
			else if (year % 400 == 0) total += 29;
			else total += 28;
			*/
			if (i % 4 == 0) {
				if (i % 100 == 0 && i % 400 == 0) day += 29;
				else day += 28;
			}
			else day += 28;
		case  1: day += 31;
		}
		
		// year�� mon�� 1�� ���� 
		day++;

		// title ��� 
		printf("\n             %4d�� %2d�� \n", year, month);
		printf("             ===========\n");
		printf("------------------------------------\n");
		printf("  SUN  MON  TUE  WED  THU  FRI  SAT\n");
		printf("------------------------------------\n");

		// ����� ���� ��ġ(����)�� ����ϰ� ĭ ��� 
		start = day % 7;
		for (i = 0; i < start; i++)
		{
			printf("     ");
		}

		// �Է��� ���� �� �ϼ��� last�� ���� 
		switch (month)
		{
		case 1: last = 31; break;
		case 2:
			if (year % 4 != 0) last = 28;
			else if (year % 100 != 0) last = 29;
			else if (year % 400 == 0) last = 29;
			else last = 28;
			break;
		case 3: last = 31; break;
		case 4: last = 30; break;
		case 5: last = 31; break;
		case 6: last = 30; break;
		case 7: last = 31; break;
		case 8: last = 31; break;
		case 9: last = 30; break;
		case 10: last = 31; break;
		case 11: last = 30; break;
		case 12: last = 31; break;
		}

		


		// 1�Ϻ��� ������ ������ ��� 
		for (i = 1; i <= last; i++)
		{
			printf("%5d", i);
			if ((start + i) % 7 == 0) printf("\n");
		}
		if ((start + i - 1) % 7 != 0) printf("\n");
		printf("\n");

	}
	
	return 0;
}