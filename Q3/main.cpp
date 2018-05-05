#include <iostream>
#include "Funcionario.h"
#include "Consultor.h"

using namespace std;

int main(){
	Funcionario f1("Thais", "12345", 3000.0);
	Consultor c1("Lincoln", "12356", 3000.0);
	Funcionario f2("Raoni", "12345", 3000.0);

	cout<< "Salario Thais: " << f1.getSalario() << endl;
	cout<< "Salario Raoni(Func): " << f2.getSalario() << endl;
	cout<< "Salario Lincoln(Default): " << c1.getSalario() << endl;
	cout<< "Salario Lincoln(20%%): " << c1.getSalario(0.2) << endl;
}
