#include <iostream>
#include <string.h>
using namespace std;

/*Com a finalidade de registro de frequ�ncia associada � aula de 04/05/2021, desenvolva um programa que permita a digita��o (e posterior exibi��o), dos dados relativos � classe "Contato" abaixo descrita:

---------------------
| Data              |
|-------------------|
| - dia: int        |
| - mes: int        |
| - ano: int        |
---------------------
-----------------------

| Contato             |
|---------------------|
| - email: string     |
| - nome: string      |
| - telefone: string  |
| - dtnasc: Data      |
|---------------------|
| + idade(): int      |
-----------------------
Implementar construtores, getter's e setter's.

OBSERVA��ES:

Utilizar a classe Data implementada durante os exemplos da aula;
Utilizar o ano de 2021 para o c�lculo da idade ou buscar alternativa para pegar, de forma autom�tica, o ano do sistema operacional.
Implementar uma solu��o que permita cadastrar e exibir uma estrutura com 5 contatos (ao exibir, informar nome, e-mail, telefone e idade).*/

class Data
{
	private:
		int dia;
		int mes;
		int ano;
		int idade2;
		
	public:
		int dia2=18, mes2=05, ano2=2021;
		
		Data(int dia, int mes, int ano, int idade2)
		{
			this->dia = dia;
			this->mes = mes;
			this->ano = ano;
			this->idade2 = idade2;
		}
		
		Data()
		{
			this->dia = 0;
			this->mes = 0;
			this->ano = 0;
			this->idade2 = 0;
		}
		
		void setDia(int dia)
		{
			this->dia = dia;
		}
		
		void setMes(int mes)
		{
			this->mes = mes;
		}

		void setAno(int ano)
		{
			this->ano = ano;
		}
		void setIdade2(int idade2)
		{
			this->idade2 = idade2;
		}
		
		int getDia()
		{
			return this->dia;
		}
		
		int getMes()
		{
			return this->mes;
		}

		int getAno()
		{
			return this->ano;
		}
		int getIdade2()
		{
			return this->idade2;
		}
        
		
		string getData()
        {
        	Data *calc;
        	
        	calc = new Data(this->dia, this->mes, this->ano, this->idade2);
        	
        	if(dia<=dia2 && mes<=mes2)
			{
				this->idade2 = ano2-ano;
			}
			else
			{
				this->idade2 = (ano2-ano)-1;
			}
 	        return "voce tem " + to_string(this->idade2) + " anos de idade.";
        }
        
};
//------------------------------------------------------------------------------

class Contato
{
private:
		string email;
		string nome;
		string telefone;
		
public:
		Contato(string email, string nome, string telefone)
		{
			this->email = email;
			this->nome = nome;
			this->telefone = telefone;
		}
		Contato()
		{
			this->email = " ";
			this->nome = " ";
			this->telefone = " ";
		}
		void setEmail(string email)
		{
			this->email = email;
		}
		void setNome(string nome)
		{
			this->nome = nome;
		}
		void setTelefone(string telefone)
		{
			this->telefone = telefone;
		}
		
			string getEmail()
		{
			return this->email;
		}
			string getNome()
		{
			return this->nome;
		}
			string getTelefone()
		{
			return this->telefone;
		}
		
		string getDados()
        {
 	        return "- Email: " + this->email + "\n" + "- Nome: " + this->nome + "\n" + "- Telefone: " + this->telefone + "\n";
        }		
};
//------------------------------------------------------------------------------
int main(int argc, char** argv)
{
	string email, nome, telefone;
	int dia, mes, ano, idade2;
	
	Contato *cont[5];
	Data *cont2[5];
	
	for(int i=0; i<5; i++)
	{
	cout << (i+1) <<" Contato" << endl; 
	cout << "Digite o seu e-mail:" << endl;
	cin >> email;
	
	cout << "Digite o seu nome:" << endl;
	cin >> nome;
	
	cout << "Digite o seu telefone:" << endl;
	cin >> telefone;
	
	cout << "Digite o dia do seu aniversario:" << endl;
	cin >> dia;
	cout << "Digite o mes do seu aniversario:" << endl;
	cin >> mes;
	cout << "Digite o ano do seu aniversario:" << endl;
	cin >> ano;
	cout << endl;
	
	cont[i] = new Contato(email, nome, telefone);
	cont2[i] = new Data(dia, mes, ano, idade2);
	}

	system("cls");
	for(int i=0; i<5; i++)
	{
	cout << (i+1) <<" Contato" << endl;
	cout << cont[i]->getDados() << endl;
	cout << cont2[i]->getData() << endl;
	cout << "---------------------";
	cout << endl;
	}
	
	return 0;
}
