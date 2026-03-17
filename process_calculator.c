#include<stdio.h>
int main() {
    int choice;
    while(1) {
        printf("\n===Chemical Process Calculator===\n");
        printf("1. Temperature Converter\n");
        printf("2. Pressure Converter\n");
        printf("3. Flow Rate Calculator\n");
        printf("4. Reactor Conversion Calculator\n");
        printf("5. Heat TRansfer Calculator\n");
        printf("6. Exit\n");

        printf("Enter your choice:");
        scanf("%d", &choice);

        switch(choice) {
            case 1: {
                int tchoice;
                float c,k,f;
                printf("\nTemperature Converter\n");
                printf("1. Celsius to Kelvin\n");
                printf("2. Celcius to Fahrenheit\n");
                printf("3. Kelvin to Celsius\n");
                printf("Enter choice: ");
                scanf("%d", &tchoice);

                if(tchoice == 1) {
                    printf("Enter temperature in celsius: ");
                    scanf("%f", &c);
                    k = c + 273.15;
                    printf("Temperature in kelvin = %.2f\n",k);
                }
                else if(tchoice == 2) {
                    printf("Enter temperature in celsius:");
                    scanf("%f",&c);
                    f =(c *9/5) + 32;
                    printf("Temperature in Fahrenheit = %.2f\n");
                }
                else if(tchoice == 3) {
                printf("Enter temperature in Kelvin:");
                scanf("%f",&k);
                c = k - 273.15;
                printf("Temperature in Celsius = %.2f\n");
            }
            else {
                printf("Invalid option\n");

            }

           break;
        }
            case 2: {
                int pchoice;
                float pa,atm,bar;

                printf("\nPresure Converter\n");
                printf("1. pascale to atm\n");
                printf("2. atm to pascale\n");
                printf("3. bar to pascale\n");
                printf("Enter choice: ");
                scanf("%d", &pchoice);

                if(pchoice == 1) {
                    printf("Enter presure in pascale: ");
                    scanf("%f",&pa);
                    atm = pa/101325;
                    printf("Presure in atm = %.5f",atm);
                }
                else if(pchoice == 2) {
                    printf("Enter presure in atm: ");
                    scanf("%f",&atm);
                    pa = atm * 101325;
                    printf("Presure in atm = %.5f",pa);
                }
                else if(pchoice == 3) {
                    printf("Enter presure in bar: ");
                    scanf("%f",bar);
                    pa = bar * 100000;
                    printf("Presure in pascale = %.5f",pa);
                }
                else {
                    printf("Invalid option\n");
                }
                break;
            }
           

            case 3: {
                float density,volumeflow, massflow;
                printf("\nFlow Rate Calculator\n");

                printf("Enter density(kg/m^3): ");
                scanf("%f",&density);

                printf("Enter volume flow rate(m^3/s): ");
                scanf("%f",&volumeflow);

                massflow = density * volumeflow;

                printf("Mass Flow Rate = %.3f kg/s\n",massflow);

                break;
            }

            
            
            

            case 4: {
                float FAO,FA,X;
                 printf("\nReactor Conversion Calculator\n");

                 printf("Enter inlet flow rate FAO(mol/s): ");
                 scanf("%f",&FAO);

                 printf("Enter outlet molar flow rate FA(mol/s): ");
                 
                 scanf("%f",&FA);

                 if(FAO == 0 ) {
                    printf("Invalid intel flow rate\n");
                    break;
                 }

                 X = (FAO - FA)/FAO;
                 printf("Conversion = %.3f", X);
                 break;
            }
            
            case 5: {
                float m,cp,dT,Q;
                printf("\nHeat Transfer Calculator\n");

                printf("Enter mass flow rate(kg/s): ");
                scanf("%f" ,&m);
                
                printf(" Enter specific heat cp(KJ/Kg.k): ");
                scanf("%f",&cp);

                printf("Enter temperature change (K): ");
                scanf("%f",&dT);

                Q = m * cp * dT;

                printf("Heat Transfer Q = %.3f",Q);

                break;
                
            }
            
            case 6:
            printf("Exiting Program...\n");
            return 0;

            default:
            printf("Invalid choice\n");
        }
    }
}