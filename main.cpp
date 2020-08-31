#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
  ofstream datos;
  datos.open("datos.txt",ios::out);
  double salario, salariosemanal,salariototal;
  int trabajadores;
  cout << "ingrese el salario por dia de los trabajadores: ";
  cin >> salario;
  cout << "ingrese el numero de trabajadores: ";
  cin >> trabajadores;
  salariosemanal=salario*5;
  salariototal=salariosemanal*trabajadores;
  cout << "el salario semanal es: " << salariosemanal << endl;
  datos << "el salario semanal es: " << salariosemanal << endl;
  cout << "el salario total por los trabajadores es: "<<salariototal << endl;
  datos << "el salario total por los trabajadores es: "<<salariototal << endl;
  datos.close();
}