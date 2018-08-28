    #include<stdio.h>

    int suma(int,int);//prototipo o declaracion

    int main(){
        int nro1,nro2,res;
        printf("ingrese numero 1:");//prinf("n%cmero:",163);
        scanf("%d",&nro1);
        printf("\n ingrese numero 2:");
        scanf("%d",&nro2);
        res=suma(nro1,nro2);
        printf("resultado:%d",res);
        return 0;

    }
    int suma(int op1,int op2){
        int resultado;
        resultado=op1+op2;
        return resultado;
    }
