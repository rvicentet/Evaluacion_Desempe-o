#include <iostream>
#include <string>
using namespace std;

int main(){
	string bus;
	int busres;
	int contador;
	int selec;
	int medmax=0;
	int n;
	bool abierto=true;
	struct listaAtletas{
		string nombre;
		string pais;
		int medallas;
	};
	
	listaAtletas *Atleta = new listaAtletas[6];
	Atleta[0].nombre="Carl Lewis";	Atleta[0].pais="EEUU";	Atleta[0].medallas=10;
	Atleta[1].nombre="Marit Bjorgen";	Atleta[1].pais="Noruega";	Atleta[1].medallas=15;
	Atleta[2].nombre="Isabell Werth";	Atleta[2].pais="Alemania";	Atleta[2].medallas=14;
	Atleta[3].nombre="Katie Ledecky";	Atleta[3].pais="EEUU";	Atleta[3].medallas=14;
	Atleta[4].nombre="Michael Phelps";	Atleta[4].pais="EEUU";	Atleta[4].medallas=28;
	Atleta[5].nombre="Birgit Fischer";	Atleta[5].pais="Alemania";	Atleta[5].medallas=12;
	while(abierto){
	cout<<" "<<endl;
	cout<<"1)	Ver lista"<<endl;
	cout<<"2)	Buscar por pais"<<endl;
	cout<<"3)	Salir"<<endl;
	cout<<""<<endl;
	cin>>selec;
	switch(selec){
	case 1:
	for(int i=0; i<6; i++){
		cout<<"Nombre: "<<Atleta[i].nombre<<"	Pais: "<<Atleta[i].pais<<"	Medallas:"<<Atleta[i].medallas<<endl;
	}
	break;
	case 2:
	cout<<" "<<endl;
	cout<<"Ingrese un pais"<<endl;
	cout<<" "<<endl;
	cin>>bus;
	contador=0;
	for(int i=0; i<6; i++){
	busres = bus.compare(Atleta[i].pais);
	if(busres==0){
		cout<<"Nombre: "<<Atleta[i].nombre<<"	Pais: "<<Atleta[i].pais<<"	Medallas:"<<Atleta[i].medallas<<endl;
		contador++;
	}else if(i==5&&contador==0){
		cout<<" "<<endl;
		cout<<"No se encontro el resultado"<<endl;
		cout<<" "<<endl;
	}
	}
	for(int i=0; i<6; i++){
		busres = bus.compare(Atleta[i].pais);
	if(busres==0){
		if(Atleta[i].medallas>medmax){
			medmax=Atleta[i].medallas;
			n=i;
		}
	}
	}
	cout<<" "<<endl;
	cout<<"El atleta con mas medallas de este pais es:"<<endl;
	cout<<"Nombre: "<<Atleta[n].nombre<<"	Pais: "<<Atleta[n].pais<<"	Medallas:"<<medmax<<endl;
	cout<<" "<<endl;
	break;
	case 3:
		cout<<" "<<endl;
		cout<<"Saliendo"<<endl;
		cout<<" "<<endl;
		abierto=false;
		break;
	}
	}
	return 0;
}