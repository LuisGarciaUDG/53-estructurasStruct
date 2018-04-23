/*
Programa_53

Uso de estructuras o registros

Autor: Luis Alberto García Rodríguez
N° lista 11
Fecha: 5 de mayo de 2015
*/

#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <string>
#include <conio.h>

using namespace std;

struct agenda
{
    string dom, frac, cd, email, nombre, cp, tel;
}ag;

int main()
{
    system ("color 1C");
//string nombre, app, apm, calle, num, frac, cd, cp, email, cumple;

cout <<"\n\n\t\tAGENDA PERSONAL"<<endl<<endl<<endl;
cout<<"\tNombre:               ";
cin>>ag.nombre;
cin.ignore();
cout<<"\tDomicilio:            ";
cin>>ag.dom;
cin.ignore();
cout<<"\tFraccionamiento:      ";
cin>>ag.frac;
cin.ignore();
cout<<"\tCodigo postal:        ";
cin>>ag.cp;
cin.ignore();
cout<<"\tCiudad:               ";
cin>>ag.cd;
cin.ignore();
cout<<"\tTelefono:             ";
cin>>ag.tel;
cin.ignore();
cout<<"\tCorreo electronico:   ";
cin>>ag.email;
cin.ignore();

system ("cls");

cout<<"\n\n\t\tMOSTRAR"<<endl<<endl;
cout<<"\tEl contacto que usted eligio es:"<<endl<<endl<<endl;
cout<<"\tNombre:                 "<<ag.nombre<<endl;
cout<<"\tDomicilio               "<<ag.dom<<endl;
cout<<"\tFraccionamiento:        "<<ag.frac<<endl;
cout<<"\tCodigo postal:          "<<ag.cp<<endl;
cout<<"\tCiudad:                 "<<ag.cd<<endl;
cout<<"\tTelefono:               "<<ag.tel<<endl;
cout<<"\tCorreo electronico:     "<<ag.email<<endl;
cout<<endl<<endl<<endl;
system ("pause");

return 0;
}
