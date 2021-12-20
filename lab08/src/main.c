/**
 * @mainpage
 * # Загальне завдання
 * 1. **Сформувати** функцию, що визначає чи число простим.
 *
 * 2. **Сформувати** функцію, яка множить матрицу на себе.
 *
 * @author Pridvorov Sergey
 * @date 11-dec-2021
 * @version 1
 */

/**
 * @file main.c
 * @brief Лабораторна работа №7-8
 *
 * @author Pridvorov Sergey
 * @date 11-dec-2021
 * @version 1
 */

#include <stdlib.h>
#include <stdio.h>
#define a 3
int cicle();
int array();
/**
 * Головна функція.
 *
 * Послідовність дій:
 * - створення масиву та його заповнення {@link arr1}
 * - перетворення двовимірного масиву в одновимірний
 * {@arr2}
 * - за допомогою функції вивід чи є число простим
 * {@resc}
 * @return успішний код повернення з програми (0)
 */
int main()
{
	int arr1[a][a];
	int arr2[a * a];
	int c = 0;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			arr1[i][j] = i + 2 * j;
		}
	}
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			arr2[c] = arr1[i][j];
			c++;
		}
	}
	array(arr2);

	int resc = cicle(rand() % 100);

	if (resc == 1)
	{
		printf("%s", "Число простое!");
	}
	if (resc == 0)
	{
		printf("%s", "Число не простое!");
	}
	 printf("\n");

	return 0;
}

/**
 * Функція множення матрицi на себе
 *
 * Послідовність дій:
 * - перетворення одновимірного масиву в двовимірний {@link arr4}
 * - вiдповiдно до правил множення матриць множиння на себе матрицi
 * {@arr5}
 * - вивід отриманої матриці
 * @return успішний код повернення з програми (0)
 */
int array(int arr3[])
{
	int arr4[a][a];
	int v = 0;
	int arr5[a][a];
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			arr4[i][j] = arr3[v];
			v++;
		}
	}
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			arr5[i][j] = 0;
			for (int k = 0; k < a; k++)
			{
				arr5[i][j] += arr4[i][k] * arr4[k][j];
			}
		}
	}


	for (int i = 0; i < a; i++)
{
        	for (int j = 0; j < a; j++)
        {
                printf("%4d", arr5[i][j]);
        }
        	printf("\n");
}
	return 0;
}

/**
 * Функція визначення чи є число простим
 *
 * Послідовність дій:
 * - створення змінної яка буде ідентифікувати число як просте чи навпаки {@b}
 * - перевірка числа за допомогою ділення з остачею
 * @return успішний код повернення з програми (b)
 */

int cicle(n)
{
	int b;
	for (int i = n - 1; i > 1; i--)
	{
		if (n % i != 0)
		{
			b = 1; //простое
		}
		if (n % i == 0)
		{
			b = 0; //не простое
			break;
		}
	}
	return b;
}
