    #include <string.h>
    #include <stdio.h>
    #include <stdlib.h>

    int main()

    {
         int cantidad;
         char nombre[31];
         char apellido[31];
         char nomApe[62];

         printf("nombre:");
         fgets(nombre,sizeof(nombre)-2,stdin);
         cantidad = strlen(nombre);

         nombre[cantidad-1] = '\0';
         printf("apellido:");
         fgets(apellido,sizeof(apellido)-2,stdin);
         cantidad = strlen(apellido);

         apellido[cantidad-1] = '\0';
         //strcpy(nomApe,apellido);
         //strcat(nomApe," ");
         //strcat(nomApe,nombre);
         //nomApe[0]='\0';
         strcat(nomApe,apellido);
         strcat(nomApe," ");
         strcat(nomApe,nombre);
         printf("%s",nomApe);


         /*
         printf("ingrese nombre:");
         fflush(stdin);
         scanf("%[^\n]",nombre);
         //fgets(cadena,cantidad,stdin); es para reemplazar gets()
         //gets(nombre);
         //strcpy(nombre,nombre);
         printf("%s",nombre);*/
         return 0;
    }

