#include<stdio.h>
#include<conio.h>
int main()
{
    printf("Enter any number between 1 to 5.\n");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Food item - Bread & Jam\nPrice - Rs 50\n");
        break;
    case 2:
        printf("Food item - Sushi\nPrice - Rs 150\n");
        break;
    case 3:
        printf("Food item - Paani poori\nPrice - Rs 30\n");
        break;
    case 4:
        printf("Food item - Falooda\nPrice - Rs 99\n");
        break;
    case 5:
        printf("Food item - Fruit Juice\nPrice - Rs 50\n");
        break;
    default: printf("Invalid Choice");
    }
}
