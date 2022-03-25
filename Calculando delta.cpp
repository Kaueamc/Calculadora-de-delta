#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{

	// identificando variaveis
	int idade;
	int nascimento;
	int ano;
	int a;
	char nome[50];
	float raiz;
	float quadrada;
	float cubica;

	// identificante numeros para delta

	float A;
	float B;
	float C;
	float delta;





	//ano atual
	ano = 2021;

	//Declarando nome e idade

	cout << ("Digite seu primeiro nome: ");
	cin >> nome;

//	cout<< ("\nSeu nome: ") << nome<< endl;


	cout << ("\nDigite sua idade:");
	cin >> idade;
	//cout << ("\nSua idade: ") << idade<<endl;

	cout << ("\nQual ano voce nasceu?\n");
	cin >> nascimento;

	a = (ano - nascimento);

	cout << ("\n Voce terminara o ano com a idade: ") << a << endl << endl;

	// Iniciando raiz quadrada e cubica

	cout << ("Digite o valor em que deseja saber a raiz quadrada e cubica:");
	cin >> raiz;

	quadrada = sqrt(raiz);
	cubica = cbrt(raiz);

	cout << ("\nRaiz quadrada:") << quadrada << endl;
	cout << ("Raiz cubica:") << cubica << endl;

	// iniciando valores delta

	cout << ("\nPara saber o valor de delta, digite o valor de a, b e c respectivamente:\n");

	cout << ("\nValor de A: ");
	cin >> A;
	cout << ("\nValor de B: ");
	cin >> B;
	cout << ("\nValor de C: ");
	cin >> C;

	// calculo de delta

	delta = ( pow(B, 2) - 4 * A * C);

	// Exibindo delta

	cout << endl << ("Seu delta:") << delta << endl;

//	B = pow(B,2);
//	A = (-4*A);


















	return 0;
}
