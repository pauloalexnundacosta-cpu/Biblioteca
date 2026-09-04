#include <stdio.h>
#include <windows.h>

int main()
{
          system("chcp 65001");
          system("cls");
          int calcular;
          do
          {
                    char sinalari;
                    double num1, num2;

                    fflush(stdin);

                    printf("Escolha a operação que quer fazer[+, -, *, /]: ");
                    scanf(" %c", &sinalari);
                    if (sinalari != '+' && sinalari != '-' && sinalari != '*' && sinalari != '/')
                    {
                              printf("escolhe bem\n\n");
                              continue; 
                    }
                    
                    system("cls");

                    printf("Digite o primerio numero da operação:");
                    scanf("%lf", &num1);

                    printf("Digite o segundo numero da operação:");
                    scanf("%lf", &num2);

                    system("cls");
                    switch (sinalari)
                    {
                     case '+':
                     {
                              printf("%.0lf + %.0lf = %.0lf\n\n", num1, num2, num1+num2);

                     }
                     break;
                    case '-':
                     {
                              printf("%.0lf - %.0lf = %.0lf\n\n", num1, num2, num1-num2);
                     }
                     break;
                     case '*':
                     {
                              printf("%.0lf * %.0lf = %.0lf\n\n", num1, num2, num1*num2);
                     }
                     break;
                     case '/':
                     { 
                              printf("%.0lf / %.0lf = %.0lf\n\n", num1, num2, num1/num2);
                     }
                     break;
                     default:

                              break;
                    }

          } while (calcular);

          return 0;
}