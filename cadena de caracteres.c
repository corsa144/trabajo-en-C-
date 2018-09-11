    #include <string.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <ctype.h>

    int main()

    {
         int cantidad,i;
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


         strlwr(apellido);
         strlwr(nombre);
         nombre[0]=toupper(nombre[0]);


         for (i=0;i<strlen(nombre);i++){
            if (nombre[i]==' '&&nombre[i+1]!='\0')
            {
                nombre[i+1]=toupper(nombre[i+1]);
            }
         }
         apellido[0]=toupper(apellido[0]);
         for (i=0;i<strlen(apellido);i++){
            if (apellido[i]==' '&&apellido[i+1]!='\0'){
                apellido[i+1]=toupper(apellido[i+1]);
            }
         }
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

