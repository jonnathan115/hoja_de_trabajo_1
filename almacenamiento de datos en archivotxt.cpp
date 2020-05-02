#include <fstream>
#include <iostream>
#include <string>
void insertar();
void reporte();
using namespace std;
int main(){
	//insertar();
	reporte();
	
}
void insertar(){
	int iid, inota;
	string inombre;
	ofstream db;
	
	cout<<"ingreso de datos de estudiante: "<<endl;	
	cout<<"ingrese identificacion: "<<endl;
	cin>>iid;
	fflush(stdin);
	cout<<"ingrese nombre: "<<endl;
	getline(cin,inombre);
	fflush(stdin);
	cout<<"ingrese nota: "<<endl;	
	cin>>inota;
	
	try{
		db.open("colegio.txt",ios::app);
		db<<iid<<"\t"<<inombre<<"\t"<<inota<<endl;
		db.close();
		
	}
	catch(exception x){
		cout<<"error";
		system("pause");
		
	}
void reporte() 	{

	int oid, onota;
	string onombre;
	ifstream db;
	
	try{
		
		cout<<"datos del archivo: "<<endl;
		cout<<"id|"<<"    nombre   |"<<"nota|"<<endl;
		db.open("colegio.txt",ios::in);
		while(db>>oid>>onombre>>onota>>){
			cout<<oid<<onombre<<onota<<endl;
			
		}
		db.close();
		
	}
	catch(exceptio x){
		cout<<"error";
		system("pause");
	}
}
}
	


