#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomNumber(int minNum, int maxNum) {
	int result;
	int lowNum = 0;
	int hiNum = 0;
	if (minNum < maxNum) {
		lowNum = minNum;
		hiNum = maxNum + 1;
	}
	else {
		lowNum = maxNum + 1;
		hiNum = minNum;
	}
	result = (rand() % (hiNum - lowNum)) + lowNum;
	return result;
}
void main() {
	/*
	char str[5] = {'M', 'a', 'x', 'i', 'm'};
	for (int i = 0; i < sizeof(str) / sizeof(str[0]); i++) {
	array[i] = i;
	printf("%c",str[i]);

	}
	*/
	srand(time(NULL)); //первичная инициализация рандома(БОЛЬШЕ НЕ НАДО, ЯСНО?!)
					   //time(NULL) возвращает число с начала эры ЮНИКС с 1970 г
					   /*	char str[10];
					   for (int i = 0; i < sizeof(str) / sizeof(str[0]); i++) {
					   str[i] = randomNumber(65, 90);
					   printf("%c",str[i]);
					   }*/
	char password[12];
	for (int i = 0; i < sizeof(password) / sizeof(password[0]); i++)
	{

		if (randomNumber(1, 2) == 1)
		{
			password[i] = randomNumber(48, 57);
		}
		else
		{
			if (randomNumber(1, 2) == 1)
			{
				password[i] = randomNumber(65, 90);

			}
			else
			{
				password[i] = randomNumber(97, 122);
			}

		}


	}
	int xxx = 0;
	while (xxx < 100) {
		for (int i = 0; i < sizeof(password) / sizeof(password[0]); i++)
		{

			printf("%c", password[i]);
		}
	}
	printf("\n");
	system("pause");
	return 0;

}