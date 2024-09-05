#include <stdio.h>
//Привет мир!
void main()
{
    for(int i = 0; i < 44; i++)
    {
        printf("*");
        if (i == 42)
        {
            printf("\n* тема: Разработка консольного приложения *\n");
            printf("*       Выполнил Ткаченко Н.И.            *\n");
        }
    }
    for (int i = 0; i < 42; i++)
    {
        printf("*");
    }
}
