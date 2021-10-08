#include "Principal.h"
#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;

Principal::Principal():
// Chamar a construtora sem par�metros � opcional, o C++ chama implicitamente, por�m � recomend�vel cham�-la
Einstein(),
Newton()
{
	Einstein.inicializa(14, 3, 1879, "Albert Einstein");
	Newton.inicializa(4, 1, 1643, "Isaac Newton");

	/*
	// Pergunta ao usu�rio a data
	cout << "Informe o dia/mes/ano." << endl;
	cin >> diaAtual >> mesAtual >> anoAtual;
	*/

	// Pega a data atual (biblioteca Windows.h)
	SYSTEMTIME st;
	GetSystemTime(&st);

	diaAtual = st.wDay;
	mesAtual = st.wMonth;
	anoAtual = st.wYear;

	Executar(); // Execu��o do Objeto Principal
}

void Principal::Executar() {
	Einstein.calc_idade_imprime(diaAtual, mesAtual, anoAtual);
	Newton.calc_idade_imprime(diaAtual, mesAtual, anoAtual);
}