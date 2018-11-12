/*
Nama        : Arif R Gilang P
NPM         : 140810170030
Nama Program: konversi suhu
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	double celcius, resReamur, resFahren, resKelvin;
	string hurufKon, reamur, fahren, kelvin;
	
	reamur = "R";
	fahren = "F";
	kelvin = "K";
	cout<<"Masukkan nilai derajat Celcius: ";
	cin>>celcius;
	cout<<"Input 'R' untuk konversi ke Reamur"<<endl;
	cout<<"Input 'F' untuk konversi ke Fahrenheit"<<endl;
	cout<<"Input 'K' untuk konversi ke Kelvin"<<endl;
	cout<<""<<endl;
	cout<<"Input huruf (Dalam Kapital)";
	cin>>hurufKon;
	
	if (hurufKon == reamur){
		resReamur = celcius * 0.8;
		cout<<celcius<<" derajat celcius dalam Reamur adalah : "<<setprecision (2)<<fixed<<resReamur<<" derajat";
	} else if (hurufKon == fahren){
		resFahren = (celcius * 1.8) + 32;
		cout<<celcius<<" derajat celcius dalam Fahrenheit adalah : "<<setprecision (2)<<fixed<<resFahren<<" derajat";
	} else if (hurufKon == kelvin){
		resKelvin = celcius + 273.15;
		cout<<celcius<<" derajat celcius dalam Kelvin adalah : "<<setprecision (2)<<fixed<<resKelvin<<" derajat";
	}
	
}
