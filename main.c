#include <stdio.h>
#include <stdlib.h>
#include<wchar.h>
#include<locale.h>
#include<time.h>
#include<unistd.h>
#include<string.h>

struct datos{
    char nombre[20];
    char apellido[20];
    int edad;
    char sexo;
    char direccion[20];
    long long int telefono;

}amigos[5];

void inicializarAgenda(struct datos *amigos,int lugares[5]){
    int i;

    for (i=0;i<5;i++){
        strcpy(amigos[i].nombre, "-");
        strcpy(amigos[i].apellido, "-");
        amigos[i].edad = 0;
        amigos[i].sexo = '-';
        strcpy(amigos[i].direccion, "-");
        amigos[i].telefono = 0;
    }

    for (i=0;i<5;i++){
        printf("Amigo %i:\n",i+1);
        printf("Nombre: %s\n",amigos[i].nombre);
        printf("Apellido: %s\n",amigos[i].apellido);
        printf("Edad: %d\n",amigos[i].edad);
        printf("Sexo: %c\n",amigos[i].sexo);
        printf("Dirección: %s\n",amigos[i].direccion);
        printf("Telefono: %lld\n",amigos[i].telefono);
        puts("--------------------------");

        lugares[i] = 0;
    }
}

void cargarAgenda(struct datos *amigos, int lugares[5]){
    int i,op,vacio;

    vacio = 0;

    puts("///////////////////////////");
    puts("////Lugares disponibles////");
    puts("///////////////////////////");

    for (i=0;i<5;i++){

        if(lugares[i]==0){
            printf("%d. Lugar Disponible\n",i+1);

            vacio = vacio + 1;
        }else{
            printf("%d. Lugar Ocupado\n",i+1);
        }

    }
        printf("6. Salir\n");

    if (vacio==0){
        puts("!!!!!!!!!!!!!!!!!!!!!!!!!!");
        puts("No hay lugares disponibles");
        puts("intente borrar algun amigo");
        puts("!!!!!!!!!!!!!!!!!!!!!!!!!!");
        system("pause");
        return 0;
    }else{
        puts("-----------------");
        printf("Elegir opción: ");
        scanf("%d",&op);

        while(op>6 || op<1){
            puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
            puts("Opcion no valida, intente de nuevo...");
            puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
            printf("Opcion: ");
            scanf("%d",&op);
        }

        switch(op){
            case 1:
                system("cls");
                i=0;
                if(lugares[i]==1){
                    puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                    printf("El lugar %d está ocupado por %s\n",i+1,amigos[i].nombre);
                    puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                    puts("----------------------------");
                    system("pause");
                }else{
                    fflush(stdin);
                    printf("ingrese el nombre: ");
                    gets(amigos[i].nombre);
                    fflush(stdin);
                    printf("ingrese el apellido: ");
                    gets(amigos[i].apellido);
                    printf("ingrese la edad: ");
                    scanf("%d",&amigos[i].edad);
                    while (amigos[i].edad>110 || amigos[i].edad<0){
                        puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                        puts("Edad invalida, intente de nuevo...");
                        puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                        printf("ingrese la edad: ");
                        scanf("%d",&amigos[i].edad);
                    }

                    fflush(stdin);
                    printf("ingrese el sexo (M/F): ");
                    scanf(" %c",&amigos[i].sexo);
                    while (amigos[i].sexo!= 'M' && amigos[i].sexo!= 'F'){
                        puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                        puts("Género desconocido, intente de nuevo...");
                        puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                        printf("ingrese el sexo (M/F): ");
                        scanf(" %c",&amigos[i].sexo);
                    }
                    fflush(stdin);
                    printf("ingrese la direccion: ");
                    gets(amigos[i].direccion);
                    printf("ingrese el telefono: ");
                    scanf("%lld",&amigos[i].telefono);
                    puts("----------------------------");
                    system("pause");

                    lugares[i]=1;
                }
                break;
            case 2:
                system("cls");
                i=1;
                if(lugares[i]==1){
                    puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                    printf("El lugar %d está ocupado por %s\n",i+1,amigos[i].nombre);
                    puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                    puts("----------------------------");
                    system("pause");
                }else{
                    fflush(stdin);
                    printf("ingrese el nombre: ");
                    gets(amigos[i].nombre);
                    fflush(stdin);
                    printf("ingrese el apellido: ");
                    gets(amigos[i].apellido);
                    printf("ingrese la edad: ");
                    scanf("%d",&amigos[i].edad);
                    while (amigos[i].edad>110 || amigos[i].edad<0){
                        puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                        puts("Edad invalida, intente de nuevo...");
                        puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                        printf("ingrese la edad: ");
                        scanf("%d",&amigos[i].edad);
                    }

                    fflush(stdin);
                    printf("ingrese el sexo (M/F): ");
                    scanf(" %c",&amigos[i].sexo);
                    while (amigos[i].sexo!= 'M' && amigos[i].sexo!= 'F'){
                        puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                        puts("Género desconocido, intente de nuevo...");
                        puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                        printf("ingrese el sexo (M/F): ");
                        scanf(" %c",&amigos[i].sexo);
                    }
                    fflush(stdin);
                    printf("ingrese la direccion: ");
                    gets(amigos[i].direccion);
                    printf("ingrese el telefono: ");
                    scanf("%d",&amigos[i].telefono);
                    puts("----------------------------");
                    system("pause");

                    lugares[i]=1;
                }
                break;
            case 3:
                system("cls");
                i=2;
                if(lugares[i]==1){
                    puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                    printf("El lugar %d está ocupado por %s\n",i+1,amigos[i].nombre);
                    puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                    puts("----------------------------");
                    system("pause");
                }else{
                    fflush(stdin);
                    printf("ingrese el nombre: ");
                    gets(amigos[i].nombre);
                    fflush(stdin);
                    printf("ingrese el apellido: ");
                    gets(amigos[i].apellido);
                    printf("ingrese la edad: ");
                    scanf("%d",&amigos[i].edad);
                    while (amigos[i].edad>110 || amigos[i].edad<0){
                        puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                        puts("Edad invalida, intente de nuevo...");
                        puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                        printf("ingrese la edad: ");
                        scanf("%d",&amigos[i].edad);
                    }

                    fflush(stdin);
                    printf("ingrese el sexo (M/F): ");
                    scanf(" %c",&amigos[i].sexo);
                    while (amigos[i].sexo!= 'M' && amigos[i].sexo!= 'F'){
                        puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                        puts("Género desconocido, intente de nuevo...");
                        puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                        printf("ingrese el sexo (M/F): ");
                        scanf(" %c",&amigos[i].sexo);
                    }
                    fflush(stdin);
                    printf("ingrese la direccion: ");
                    gets(amigos[i].direccion);
                    printf("ingrese el telefono: ");
                    scanf("%d",&amigos[i].telefono);
                    puts("----------------------------");
                    system("pause");

                    lugares[i]=1;
                }
                break;
            case 4:
                system("cls");
                i=3;
                if(lugares[i]==1){
                    puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                    printf("El lugar %d está ocupado por %s\n",i+1,amigos[i].nombre);
                    puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                    puts("----------------------------");
                    system("pause");
                }else{
                    fflush(stdin);
                    printf("ingrese el nombre: ");
                    gets(amigos[i].nombre);
                    fflush(stdin);
                    printf("ingrese el apellido: ");
                    gets(amigos[i].apellido);
                    printf("ingrese la edad: ");
                    scanf("%d",&amigos[i].edad);
                    while (amigos[i].edad>110 || amigos[i].edad<0){
                        puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                        puts("Edad invalida, intente de nuevo...");
                        puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                        printf("ingrese la edad: ");
                        scanf("%d",&amigos[i].edad);
                    }

                    fflush(stdin);
                    printf("ingrese el sexo (M/F): ");
                    scanf(" %c",&amigos[i].sexo);
                    while (amigos[i].sexo!= 'M' && amigos[i].sexo!= 'F'){
                        puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                        puts("Género desconocido, intente de nuevo...");
                        puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                        printf("ingrese el sexo (M/F): ");
                        scanf(" %c",&amigos[i].sexo);
                    }
                    fflush(stdin);
                    printf("ingrese la direccion: ");
                    gets(amigos[i].direccion);
                    printf("ingrese el telefono: ");
                    scanf("%d",&amigos[i].telefono);
                    puts("----------------------------");
                    system("pause");

                    lugares[i]=1;
                }
                break;
            case 5:
                system("cls");
                i=4;
                if(lugares[i]==1){
                    puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                    printf("El lugar %d está ocupado por %s\n",i+1,amigos[i].nombre);
                    puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                    puts("----------------------------");
                    system("pause");
                }else{
                    fflush(stdin);
                    printf("ingrese el nombre: ");
                    gets(amigos[i].nombre);
                    fflush(stdin);
                    printf("ingrese el apellido: ");
                    gets(amigos[i].apellido);
                    printf("ingrese la edad: ");
                    scanf("%d",&amigos[i].edad);
                    while (amigos[i].edad>110 || amigos[i].edad<0){
                        puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                        puts("Edad invalida, intente de nuevo...");
                        puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                        printf("ingrese la edad: ");
                        scanf("%d",&amigos[i].edad);
                    }

                    fflush(stdin);
                    printf("ingrese el sexo (M/F): ");
                    scanf(" %c",&amigos[i].sexo);
                    while (amigos[i].sexo!= 'M' && amigos[i].sexo!= 'F'){
                        puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                        puts("Género desconocido, intente de nuevo...");
                        puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                        printf("ingrese el sexo (M/F): ");
                        scanf(" %c",&amigos[i].sexo);
                    }
                    fflush(stdin);
                    printf("ingrese la direccion: ");
                    gets(amigos[i].direccion);
                    printf("ingrese el telefono: ");
                    scanf("%d",&amigos[i].telefono);
                    puts("----------------------------");
                    system("pause");

                    lugares[i]=1;
                }
                break;
            case 6:
                system("cls");
                return 0;
                break;
        }
    }
}
void borrarArreglo(struct datos *amigos, int lugares[5]){
    int i,op;

    puts("////////////////////////");
    puts("////Amigos Agendados////");
    puts("////////////////////////");
    puts("\n¿Qué amigo desea eliminar?\n");
    puts("Amigos disponibles: ");
    for (i=0;i<5;i++){
        if(lugares[i]==1){
            printf("%d. %s %s\n",i+1,amigos[i].nombre,amigos[i].apellido);
        }else{
            printf("%d. Lugar Disponible\n",i+1);
        }
    }
    puts("6. Salir");
    printf("Elegir opción: ");
    scanf("%d",&op);

    while (op>6 || op<1){
        puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
        puts("Opción invalida, intente de nuevo...");
        puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
        printf("Elegir opción: ");
        scanf("%d",&op);
    }

    switch (op){
        case 1:
            i=0;
            system("cls");
            if(lugares[i]==0){
                printf("El lugar ya estaba vacio\n");
            }else{
                strcpy(amigos[i].nombre, "-");
                strcpy(amigos[i].apellido, "-");
                amigos[i].edad = 0;
                amigos[i].sexo = '-';
                strcpy(amigos[i].direccion, "-");
                amigos[i].telefono = 0;
                printf("¡Amigo eliminado!\n");
                printf("---------------------------------------\n");
                system("pause");

                lugares[i]=0;
            }
            break;
        case 2:
            i=1;
            system("cls");
            if(lugares[i]==0){
                printf("El lugar ya estaba vacio\n");
            }else{
                strcpy(amigos[i].nombre, "-");
                strcpy(amigos[i].apellido, "-");
                amigos[i].edad = 0;
                amigos[i].sexo = '-';
                strcpy(amigos[i].direccion, "-");
                amigos[i].telefono = 0;
                printf("¡Amigo eliminado!\n");
                printf("---------------------------------------\n");
                system("pause");

                lugares[i]=0;
            }
            break;
        case 3:
            i=2;
            system("cls");
            if(lugares[i]==0){
                printf("El lugar ya estaba vacio\n");
            }else{
                strcpy(amigos[i].nombre, "-");
                strcpy(amigos[i].apellido, "-");
                amigos[i].edad = 0;
                amigos[i].sexo = '-';
                strcpy(amigos[i].direccion, "-");
                amigos[i].telefono = 0;
                printf("¡Amigo eliminado!\n");
                printf("---------------------------------------\n");
                system("pause");

                lugares[i]=0;
            }
            break;
        case 4:
            i=3;
            system("cls");
            if(lugares[i]==0){
                printf("El lugar ya estaba vacio\n");
            }else{
                strcpy(amigos[i].nombre, "-");
                strcpy(amigos[i].apellido, "-");
                amigos[i].edad = 0;
                amigos[i].sexo = '-';
                strcpy(amigos[i].direccion, "-");
                amigos[i].telefono = 0;
                printf("¡Amigo eliminado!\n");
                printf("---------------------------------------\n");
                system("pause");

                lugares[i]=0;
            }
            break;
        case 5:
            i=4;
            system("cls");
            if(lugares[i]==0){
                printf("El lugar ya estaba vacio\n");
            }else{
                strcpy(amigos[i].nombre, "-");
                strcpy(amigos[i].apellido, "-");
                amigos[i].edad = 0;
                amigos[i].sexo = '-';
                strcpy(amigos[i].direccion, "-");
                amigos[i].telefono = 0;
                printf("¡Amigo eliminado!\n");
                printf("---------------------------------------\n");
                system("pause");

                lugares[i]=0;
            }
            break;
        case 6:
            printf("---------------------------------------\n");
            system("pause");
            return 0;
            break;
    }
}

void mostrarArreglo(struct datos *amigos, int lugares[5]){
    int i,op;

    puts("////////////////////////");
    puts("////Amigos Agendados////");
    puts("////////////////////////");
    puts("\n¿Qué amigo desea mostrar?\n");
    puts("Amigos disponibles: ");

    for (i=0;i<5;i++){
        if(lugares[i]==1){
            printf("%d. %s %s\n",i+1,amigos[i].nombre,amigos[i].apellido);
        }else{
            printf("%d. Lugar Disponible\n",i+1);
        }
    }
    puts("6. Salir");
    printf("Elegir opción: ");
    scanf("%d",&op);

    while (op>6 || op<1){
        puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
        puts("Opción invalida, intente de nuevo...");
        puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
        printf("Elegir opción: ");
        scanf("%d",&op);
    }

    switch (op){
        case 1:
            i=0;
            system("cls");
            if(lugares[i]==0){
                printf("Vacio");
            }else{
                printf("Amigo N°%d\n",i+1);
                printf("Nombre: %s %s\n",amigos[i].nombre,amigos[i].apellido);
                printf("Edad: %d\n",amigos[i].edad);
                printf("Sexo: %c\n",amigos[i].sexo);
                printf("Dirección: %s\n",amigos[i].direccion);
                printf("Telefono: %lld\n",amigos[i].telefono);
                printf("---------------------------------------\n");
            }
            break;
        case 2:
            i=1;
            system("cls");
            if(lugares[i]==0){
                printf("Vacio");
            }else{
                printf("Amigo N°%d\n",i+1);
                printf("Nombre: %s %s\n",amigos[i].nombre,amigos[i].apellido);
                printf("Edad: %d\n",amigos[i].edad);
                printf("Sexo: %c\n",amigos[i].sexo);
                printf("Dirección: %s\n",amigos[i].direccion);
                printf("Telefono: %lld\n",amigos[i].telefono);
                printf("---------------------------------------\n");
            }
            break;
        case 3:
            i=2;
            system("cls");
            if(lugares[i]==0){
                printf("Vacio");
            }else{
                printf("Amigo N°%d\n",i+1);
                printf("Nombre: %s %s\n",amigos[i].nombre,amigos[i].apellido);
                printf("Edad: %d\n",amigos[i].edad);
                printf("Sexo: %c\n",amigos[i].sexo);
                printf("Dirección: %s\n",amigos[i].direccion);
                printf("Telefono: %lld\n",amigos[i].telefono);
                printf("---------------------------------------\n");
            }
            break;
        case 4:
            i=3;
            system("cls");
            if(lugares[i]==0){
                printf("Vacio");
            }else{
                printf("Amigo N°%d\n",i+1);
                printf("Nombre: %s %s\n",amigos[i].nombre,amigos[i].apellido);
                printf("Edad: %d\n",amigos[i].edad);
                printf("Sexo: %c\n",amigos[i].sexo);
                printf("Dirección: %s\n",amigos[i].direccion);
                printf("Telefono: %lld\n",amigos[i].telefono);
                printf("---------------------------------------\n");
            }
            break;
        case 5:
            i=4;
            system("cls");
            if(lugares[i]==0){
                printf("Vacio");
            }else{
                printf("Amigo N°%d\n",i+1);
                printf("Nombre: %s %s\n",amigos[i].nombre,amigos[i].apellido);
                printf("Edad: %d\n",amigos[i].edad);
                printf("Sexo: %c\n",amigos[i].sexo);
                printf("Dirección: %s\n",amigos[i].direccion);
                printf("Telefono: %lld\n",amigos[i].telefono);
                printf("---------------------------------------\n");
            }
            break;
        case 6:
            return 0;
            break;
    }
}

int main()
{
    int op,bandera,iniciar;
    struct datos amigos[5];
    int lugares[5];

    bandera = 0;
    iniciar = 0;

    setlocale(LC_ALL, "");
    srand(time(NULL));

    do {
        system("cls");
        puts("////////////////////////");
        puts("////Agenda de Amigos////");
        puts("////////////////////////");
        puts("Menú: ");
        puts("1. Iniciar/Limpiar agenda");
        puts("2. Agregar amigo");
        puts("3. Eliminar amigo");
        puts("4. Mostrar amigos");
        puts("5. Salir");
        puts("-----------------");
        printf("Elegir opción: ");
        scanf("%d",&op);

        while (op>5 || op<1){
                puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                puts("Opcion no valida, intente de nuevo...");
                puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                printf("Opcion: ");
                scanf("%d",&op);
        }
        switch(op){
                case 1:
                    system("cls");
                    puts("Iniciando agenda, espere...");
                    sleep(2);
                    inicializarAgenda(amigos,lugares);
                    system("cls");
                    puts("¡Agenda limpia!");
                    system("pause");
                    puts("Volviendo al menú...");
                    sleep(2);
                    iniciar = 1;
                    break;
                case 2:
                    system("cls");
                    if (iniciar != 1){
                        puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                        puts("Debe inicializar la agenda...");
                        puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                    }else{
                        cargarAgenda(amigos,lugares);
                        system("cls");
                    }
                    puts("Volviendo al menú...");
                    sleep(2);
                    break;
                case 3:
                    system("cls");
                    if (iniciar != 1){
                        puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                        puts("Debe inicializar la agenda...");
                        puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                    }else{
                        borrarArreglo(amigos,lugares);
                    }
                    system("cls");
                    puts("Volviendo al menú...");
                    sleep(2);
                    break;
                case 4:
                    system("cls");
                    if (iniciar != 1){
                        puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                        puts("Debe inicializar la agenda...");
                        puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                    }else{
                        mostrarArreglo(amigos,lugares);
                        system("pause");
                    }
                    system("cls");
                    puts("Volviendo al menú...");
                    sleep(2);
                    break;
                case 5:
                    bandera = 1;
                    break;
                }
        }while(bandera!=1);

    return 0;
}
