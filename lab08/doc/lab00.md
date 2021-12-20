# Лабораторна робота № 8. Вступ до документації коду

## 1 Вимоги

### 1.1 Розробник

* Придворов Сергій Володимирович;
* студент групи КІТ-121в;
* 11-грудня-2021.

### 1.2 Індивідуальне завдання

Переробити програми, що були розроблені під час виконання лабораторних робіт з тем
“Масиви” та “Цикли” таким чином, щоб використовувалися функції для обчислення результату.

## 2 Опис програми

### 2.1 Функціональне призначення

Програма призначена для генерування результату лабораторних робіт з тем “Масиви” та “Цикли” за допомогою функцій.

### 2.2 Опис логічної структури

- Створюємо змінну `int resc = cicle(rand() % 100);`, яка передає у функцію з простим числом змінну за допомогою функції rand. 
- Створюємо масив  `int arr1[a][a];` та заповнюємо його значеннями які передаються у функцію.

Опис розроблених структур і функцій наводиться на базі результатів роботи системи автодокументування *Doxygen*.

#### Функція визначення чи є число простим

```
int cicle(n)
```
*Призначення*: визначення є число простим.

*Опис роботи*:  за допомогою цикла функція визначає на яке число ділиться задане число без остачі, якщо остача є, то програма присвоює потрібне значення та зупинється. Якщо число просте, то присвоюється 1, якщо ні - 0.

**Аргументи**:
- *b* - результат який визначає яким є задане число, якщо b = 0, то число не просте, якщо b = 1, - то просте.
- *n* - задане число.

#### Функція множення матрицi на себе.

``` 
int array(int arr3[])
```

*Призначення*: множення матрицi на себе вiдповiдно до правил множення матриць.

*Опис роботи*: функція приймає заповнену одновимірну матрицю, перетворює її в двовимiрну та вiдповiдно до правил множення матриць множить її на себе.

**Аргументи**: 
- *arr3[v]* - вхiдний масив.
- *arr4[a][a]* - двовимiрний масив, який бере даннi у *arr3[v]*.
- *int arr5[a][a]* - двовимiрний масив, який має значення множення матрицi.

#### Основна функція

```
int main() 
```

*Призначення*: головна функція.

*Опис роботи*: 

- створення масиву та його заповнення;
- генерація числа для функцiї перевірки чи є число простим;
- вивід даних;
- повертає функція код повернення з програми (0).

#### Структура проекту

```
		└── lab00
		    ├── Doxyfile
		    ├── Makefile
		    ├── README.md
		    ├── doc
		    │   ├── lab08.md
		    │   ├── lab08.docx
		    │   └── lab08.pdf
		    └── src
		         └── main.c
		  
		  
```


### 2.3 Важливі фрагменти програми

#### Перетворення двовимiрного масиву в одновимiрний.

```
		for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			arr2[c] = arr1[i][j];
			c++;
		}
	}

```

#### Перетворення одновимiрного масиву в двовимiрний. 

```
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			arr4[i][j] = arr3[v];
			v++;
		}
	}
```

#### Множення матрицi на себе.

```
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

```

#### Визначення чи є число простим.

```
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
```

## 3 Варіанти використання

Для демонстрації результатів кожної задачі використовується:

- покрокове виконання програми в утиліті lldb;
- видача результатів у консоль за допомогою функції виводу.

**Варіант використання 1**: послідовність дій для запуску програми у режимі відлагодження:

- запустити програму у відлагоднику lldb;
- поставити точку зупинки на функції main (строка з `return 0;`);
- запустити програму;
- подивитись результати виконання програми, оглядаючи значення зазначенних змiнних.

```
(lldb) run
Process 8143 launched: '/home/sergey/Рабочий стол/123/programing_pridvorov/lab08/dist/main.bin' (x86_64)
  10  22  34
  13  31  49
  16  40  64

(lldb) p b
(int) $0 = 1

```


**Варіант використання 2**: видача згенерованих студентів з використанням вікна консолі.

```
sergey@sergey-VirtualBox:~/Рабочий стол/123/programing_pridvorov/lab08$ make run
rm -rf dist
mkdir dist
clang -std=gnu11 -g -Wall -Wextra -Werror -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -Wno-unused-variable -Werror=vla  src/main.c -o ./dist/main.bin
./dist/main.bin
  10  22  34
  13  31  49
  16  40  64
Число простое!
sergey@sergey-V
```

## Висновки

При виконанні даної лабораторної роботи було набуто практичного досвіду роботи із функцiями та документацiєю.