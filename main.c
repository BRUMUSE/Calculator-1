/*
 ============================================================================
 Name        : calculator
 Author      : BRUMUSE
 Description : Коды операций:
               1 - "addition";
               2 - "subtraction";
               3 - "multiplication";
               4 - "division";
               5 - "exponentiation";
               6 - "factorial";
               7 - "vector" ;
               Операции для векторов:
               "+" - addition
               "-" - subtraction
               "*" - multiplication
               Чтобы перезапустить программу нажмите "1" после окончания операции.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Переменные ввода значений калькулятора.
    float x, y, z;
    // Переменные для работы функций калькулятора (r - переменная рестарта).
    int m, n, t, r = 0;
    // Переменная для выбора операции с векторами.
    char symbol;
    // Переменные для работы с векторами(length - длина вектора,number - знаечние вектора, index - ячейка (индекс) в массиве)
    int length, number, index;
    // Переменные для созданяи массива, выделения памяти.
    int *vector1, *vector2, *vector3, res = 0 ;

    do
    {

        // Выберите нужный номер операции от 1 до 7. Если вы выберете номер,
        // который не входит в диапозон этих чисел, вылетит "Error"
        puts("Enter operation number:");
        scanf("%i", &m);

        switch (m)
        {
            case 1 :
                puts("You chose lamination");
                puts("Enter the first number");
                scanf("%f", &x);
                puts("Enter the second number");
                scanf("%f", &y);
                printf("The sum of these values is %f\n", x + y);
                break;
            case 2 :
                puts("You chose subtraction");
                puts("Enter the first number");
                scanf("%f", &x);
                puts("Enter the second number");
                scanf("%f", &y);
                printf("The difference of these values is %f\n", x - y);
                break;
            case 3 :
                puts("You chose multiplication");
                puts("Enter the first number");
                scanf("%f", &x);
                puts("Enter the second number");
                scanf("%f", &y);
                printf("The sum of these values is %f\n", x * y);
                break;
            case 4 :
                puts("You chose division ");
                puts("Enter the first number");
                scanf("%f", &x);
                puts("Enter the second number");
                scanf("%f", &y);
                if (y == 0)
                {
                    printf("Error \n");
                }
                else
                {
                    printf("The sum of these values is %f\n", x / y);
                }
                break;
            case 5 :
                puts("You chose exponentiation");
                puts("Insert the number");
                scanf("%f", &x);
                puts("Enter the power");
                scanf("%i", &t);
                z = 1;
                // Цикл возведения в степень.
                for (; t > 0; --t)
                {
                    z = z * x;
                }
                printf("Res in = %f\n", z);
                break;
            case 6 :
                puts("You chose factorial");
                puts("insert the number");
                scanf("%f", &x);
                if (x == 0) {
                    printf("X! = 1\n");
                } else {
                    y = 1;
                    for (n = 1; n <= x; n++) {
                        y = y * n;
                    }
                    printf("X! = %f\n", y);
                }
                break;
            case 7 :
                puts("You chose vector");
                puts("Enter operation symbol");
                scanf("%s", &symbol);
                if (symbol == '+')
                {
                    puts("You chose vectors addition");
                    puts("Enter the length of vectors");
                    scanf("%i", &length);
                    // Мы создали массив, в который будут сохранятся знаечения первого вектора
                    vector1 = malloc(length*sizeof(int));
                    // Цикл, который запрашвиает знаечния первого вектора и сохраняет их в массив
                    for(index = 0; index < length; index++)
                    {
                        scanf("%i", &number);
                        vector1[index] = number;
                    }
                    puts("Enter the values of second vector");
                    // Мы создали массив, в который будут сохранятся значения второго вектора
                    vector2 = malloc(length*sizeof(int));
                    // Цикл, который запрашивает значения второго вектора и сохраняет их в массив
                    for(index = 0; index < length; index++)
                    {
                        scanf("%i", &number);
                        vector2[index] = number;
                    }
                    for (index = 0; index < length; index++)
                    {
                        printf( "%i ", vector1[index] + vector2[index]);
                    }
                    //Освобождение памяти первого и второго массива.
                    free(vector1);
                    free(vector2);
                if (symbol == '-')
                {
                    puts("You chose vectors subtraction");
                    puts("Enter the length of vectors");
                    scanf("%i", &length);
                    // Мы создали массив, в который будут сохранятся знаечения первого вектора
                    vector1 = malloc(length*sizeof(int));
                    // Цикл, который запрашвиает знаечния первого вектора и сохраняет их в массив
                    for(index = 0; index < length; index++)
                    {
                        scanf("%i", &number);
                        vector1[index] = number;
                    }
                    puts("Enter the values of second vector");
                    // Мы создали массив, в который будут сохранятся значения второго вектора
                    vector2 = malloc(length*sizeof(int));
                    // Цикл, который запрашивает значения второго вектора и сохраняет их в массив
                    for(index = 0; index < length; index++)
                    {
                        scanf("%i", &number);
                        vector2[index] = number;
                    }
                    for (index = 0; index < length; index++)
                    {
                        printf( "%i ", vector1[index] - vector2[index]);
                    }
                    // Освобождение памяти первого и второго массива
                    free(vector1);
                    free(vector2);
                }
                if (symbol == '*')
                {
                    puts("You chose vectors multiplication");
                    puts("Enter values of the first vector: ");
                    // Мы создали массив, в который будут сохранятся знаечения первого вектора.
                    vector1 = malloc(length*sizeof(int));
                    // Цикл, который запрашвиает знаечния первого вектора и сохраняет их в массив
                    for(index = 0; index < length; index++)
                    {
                        scanf("%i", &number);
                        vector1[index] = number;
                    }
                    puts("Enter values of the second vector: ");
                    //Мы создали массив, в который будут сохранятся значения второго вектора.
                    vector2 = malloc(length*sizeof(int));
                    // Цикл, который запрашвиает знаечния второго вектора и сохраняет их в массив
                    for(index = 0; index < length; index++)
                    {
                        scanf("%i", &number);
                        vector2[index] = number;
                    }
                    // Массив, в который будет сохранятся результат операции над векторами.
                    vector3 = malloc(length*sizeof(int));
                    // Цикл, который умножает значения из индекксов массивов и сохраняет результат в переменную res.
                    for (index = 0; index < length; index++)
                    {
                        vector3[index] = vector1[index] * vector2[index];
                        res += vector3[index];
                    }
                    printf("vec1 * vec2 = %i\n", res);
                    // Освобождение памяти паервого и второго мамссива
                    free(vector1);
                    free(vector2);
                }
                else
                {
                    puts("ERROR!");
                }
                    break;
                    default:
                        puts("Error!");
                    break;
                }
        }
        puts("\nRestarts 1 - Yes/0 - No");
        scanf("%i", &r);
    }
    while (r != 0);
}
