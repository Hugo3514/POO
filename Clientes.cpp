#include "Persona1.cpp"
#include <iostream>
using namespace std;
class Cliente : Persona{
	        // atributos
	        private:
	         	string nit;
	        // metodos constructor, get set,crud
	        public:
	        	Cliente(){
				}
				Cliente(string nom,string ape, string dir, int tel,string fn,string n) : Persona(nom,ape,dir,tel,fn){
					nit = n;
				}
				// set (modificar)
				void setnit(string n){
					nit = n;
				}
				void setnombres(string nom){
					nombres = nom;
				}
				void setapellidos(string ape){
					apellidos = ape;
				}
				void setdireccion(string dir){
					direccion = dir;
				}
				void settelefono(int tel){
					telefono = tel;
				}
				void setfechaNacimiento(string fn){
					fecha_nacimiento = fn;
				}
				// get (mostrar)
				string getnit(){
					return nit;
				}
				string getnombres(){
					return nombres;
				}
				string getapellidos(){
					return apellidos;
				}
				string getdireccion(){
					return direccion;
				}
				int gettelefono(){
					return telefono;
				}
				string fechaNcimiento(){
					return fecha_nacimiento;
				}
				
				void leer (){
					cout <<"nit:" <<nit<<endl;
					cout <<"Nombres: "<<nombres<<endl;
					cout <<"Apellidos: "<<apellidos<<endl;
					cout <<"Dirección: "<<direccion<<endl;
					cout <<"Telefono: "<<telefono<<endl;
					cout <<"Fecha de Nacimiento: "<<fecha_nacimiento<<endl;
				}
	        
};
