#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    char st[100], a;
    int k, count=0, max=0, m;
    printf("Введите кол-во символов в строке: ");
    scanf_s("%d", &k);
    printf("\nВведите строку: ");
    scanf_s("%c", &a);
    for (int i=0; i<k; i++)
    {
        scanf_s("%c", &a);
        st[i] = a;
    }
    for (int i = 0; i < k; i++)
    {
        if (st[i] == ' ')
        {
            count++;
            if (count == 5)
            {
                for (int j = i; j > i - count; j--)
                    st[j] = '_';
            }
            else if (count > 5) 
            {
                st[i] = '_';
            }
        }
        else
        {
            if (count < 5)
            {
                for (int j = i; j <k; j++)
                {
                    st[j - count] = st[j];
                }
                k -= count;
                i -= count;
            }
            if (count > max)
                max = count;
            count = 0;
        }

    }
    if (count > max)
        max = count;
    st[k] = 0;
    printf("Результат: ");
    for (int i = 0; i < strlen(st); i++)
        printf("%c", st[i]);
    printf("\nМаксимум равен: %d", max);
}

//#include <stdio.h>
//#include <locale.h>
//#include <string.h>
//
//int main()
//{
//	setlocale(LC_ALL, "Rus");
//	char st[100], a;
//	int count = 0, max = 0, k;
//	printf("Введите строку: ");
//	gets_s(st);
//	k = strlen(st);
//	for (int i = 0; i < k; i++)
//    {
//        if (st[i] == ' ')
//        {
//            count++;
//            if (count == 5)
//            {
//                for (int j = i; j > i - count; j--)
//                    st[j] = '_';
//            }
//            else if (count > 5)
//            {
//                st[i] = '_';
//            }
//        }
//        else
//        {
//            if (count < 5)
//            {
//                for (int j = i; j <k; j++)
//                {
//                    st[j - count] = st[j];
//                }
//                k -= count;
//                i -= count;
//            }
//            if (count > max)
//                max = count;
//            count = 0;
//        }
//
//    }
//    if (count > max)
//        max = count;
//    st[k] = 0;
//    printf("Результат: ");
//    for (int i = 0; i < strlen(st); i++)
//        printf("%c", st[i]);
//    printf("\nМаксимум равен: %d", max);
//}



//#include <stdio.h>
//#include <string.h>
//#include <locale.h>
//int main()
//{
//	setlocale(LC_ALL, "Rus");
//	FILE* fl1, * fl2;
//	char st[100];
//	int count = 0, max = 0, k;
//	fopen_s(&fl1, "input.txt", "r");
//	fopen_s(&fl2, "output.txt", "w");
//	printf("Введите кол-во символов в строке: ");
//	scanf_s("%d", &k);
//	fgets(st, k+1, fl1);
//	for (int i = 0; i < k; i++)
//    {
//        if (st[i] == ' ')
//        {
//            count++;
//            if (count == 5)
//            {
//                for (int j = i; j > i - count; j--)
//                    st[j] = '_';
//            }
//            else if (count > 5)
//            {
//                st[i] = '_';
//            }
//        }
//        else
//        {
//            if (count < 5)
//            {
//                for (int j = i; j <k; j++)
//                {
//                    st[j - count] = st[j];
//                }
//                k -= count;
//                i -= count;
//            }
//            if (count > max)
//                max = count;
//            count = 0;
//        }
//
//    }
//    if (count > max)
//        max = count;
//    st[k] = 0;
//    for (int i = 0; i < strlen(st); i++)
//        fprintf(fl2, "%c", st[i]);
//    fprintf(fl2, "\nМаксимум равен: %d", max);
//    fclose(fl1);
//    fclose(fl2);
//}