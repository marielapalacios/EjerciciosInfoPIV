#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
main(){
int cantidad=0;//Almacena la cantidad de entradas compradas
//Almacena la opcion de menu seleccionada por el usuario
char opcion=' ';
float precio=0, total=0;
cout<<"\n\t****************************************"<<end1;
cout<<"\t* BIENVENIDO AL ESTADIO CUSCATLAN *"<<end1;
cout<<"\t****************************************"<<end1;
cout<<"\t* Sectores del estadio *"<<end1;
cout<<"\t* A- Sol general *"<<end1;
cout<<"\t* B- Sol preferente *"<<end1;
cout<<"\t* C- Sombra *"<<end1;
cout<<"\t* D- Tribuna *"<<end1;
cout<<"\t* E- Platea *"<<end1;
cout<<"\t****************************************"<<end1;
cout<<"\n\t Selecciona la letra del sector del estadio : "<<end1;
opcion=getche(); //Capturamos la seccion del usuario
cout<<"\n\t Ingresa la cantidad de entradas requeridas: ";
cin>>cantidad;
if (cantidad<1){ 
cout<<"\n\t ERROR: Cantidad de entradas debe ser mayor que 1 "<<end1;
system("PAUSE");
return 0;
}
system("cls";)
switch(option){
case 'A': case 'a':
cout<<"\n\t Sector seleccionado: Sol general"<<end1;
precio=3;
break;
case 'B': case 'b':
cout<<"\n\t Sector seleccionado: Sol preferente"<<end1;
precio=5;
break;
case 'C': case 'c':
cout<<"\n\t Sector seleccionado: Sombra"<<end1;
precio=8;
break;
case 'D': case 'd':
cout<<"\n\t Sector seleccionado: Tribuna"<<end1;
precio=15;
break;
case 'E': case 'e':
cout<<"\n\t Sector seleccionado: Platea"<<end1;
precio=20;
break;
default:
cout<<"\n\t ERROR: El sector seleccionado no existe"<<end1;
system("PAUSE");
return 0;//Cerramos el programa
}
total=precio*cantidad;
cout<<"\t Precio unitario: $"<<precio<<end1;
cout<<"\t Cantidad de entradas:"<<cantidad<<end1;
cout<<"\t TOTAL A PAGAR: $"<<total<<end1;
cout<<"\n\n\t GRACIAS POR VISITARNOS!"<<end1;
system("PAUSE");
}
