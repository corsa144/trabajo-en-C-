    #include<stdio.h>
    #include<stdlib.h>
    #define esc 27

    int main(){

        char seguir;
        int nro, max, min,flag=0;
        do{
            system("cls");
            printf("numero:");
            scanf("%d", &nro);//recibe dos parametros//
           /* if (flag==0){
                min=nro;
                max=nro;
                flag=1;
            }
            if (nro>max){
                max=nro;
            }
            if (nro<min){
                min=nro;
            }*/
            if (flag==0||nro>max){

                max=nro;
            }
            if (flag==0||nro<min){
                min=nro;
                flag=1;
            }
            printf("presione esc para salir, cualquier otra tecla para continuar");
            seguir=getch();
        }while(seguir!=esc);

        printf("\n mayor: %d\n menor: %d",max,min);
    return 0;
    }
