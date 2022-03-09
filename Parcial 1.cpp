#include<iostream>
#include<conio.h>
using namespace std;

struct Promedio{
	float nota1;
	float nota2;
	float nota3;
	float nota4;
	float nota5;
};

struct Alumno{
	char nombre[20];
	char apellido[20];
	char curso[30];
	int codigo;
	struct Promedio prom;
}alumno1;

int main(){
	float promedio_alumno;
	
	cout<<"Nombre: "; cin.getline(alumno1.nombre,20,'\n');
	cout<<"Apellido: "; cin.getline(alumno1.apellido,20,'\n');
	cout<<"Curso: "; cin.getline(alumno1.curso,30,'\n');
	cout<<"Ingrese su Codigo de Alumno: "; cin>>alumno1.codigo;
	
	cout<<"\n:Notas del Alumno:.\n";
	cout<<"Nota 1: "; cin>>alumno1.prom.nota1;
	cout<<"Nota 2: "; cin>>alumno1.prom.nota2;
	cout<<"Nota 3: "; cin>>alumno1.prom.nota3;
	cout<<"Nota 4: "; cin>>alumno1.prom.nota4;
	cout<<"Nota 5: "; cin>>alumno1.prom.nota5;
	
	promedio_alumno = (alumno1.prom.nota1+alumno1.prom.nota2+alumno1.prom.nota3+alumno1.prom.nota4+alumno1.prom.nota5)/5;
	string mensaje = "";
 		mensaje = promedio_alumno>60 ? "Aprobado" : "Reprobado";
 			cout<<"El promedio es "<<promedio_alumno<<" por lo tanto esta "<< mensaje<<endl;
	
	cout<<"\nDatos del Alumno\n";
	cout<<"Codigo del Alumno: "<<alumno1.codigo<<endl;
	cout<<"Nombre: "<<alumno1.nombre<<endl;
	cout<<"Apellido: "<<alumno1.apellido<<endl;
	cout<<"Curso: "<<alumno1.curso<<endl;
	cout<<"Promedio: "<<promedio_alumno<<endl;
	
	
	getch();
	return 0;
}

