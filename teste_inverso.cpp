#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
using std::string;

string inversao(string invert);

int main()
{
	string v;

	cout<<"\nDigite um conjunto de caracteres que deseja inverter: ";
	cin>>v;

    v=inversao(v);
    cout<<"\n\n"<<v;
    return 0;
}
string inversao(string invert)
{
    string temp;
    int i, j;
    /*A partir deste ponto a variável string invert será invertida.
    Este processo reposicionará o último caractere da string como
    primeiro, o penúltimo como segundo, e assim por diante.
    Para este processo será necessário utilizar uma variável
     temporária, chamada aqui de temp*/

    /*O for abaixo está alocando espaço (preenchidos com 0's) em temp
    para que a variável temp tenha "length()"igual ao de invert*/
    for(i=0;i<invert.length();i++)
    {
        temp+='0';
    }

    //agora está sendo feita a cópia de invert em temp, caractere por caractere
	for(i=0;i<invert.length();i++)
    {
        temp[i]=invert[i];
    }

    /*Abaixo copiaremos temp em invert de modo invertido. Para isso, além do contador i
    usaremos o contador j, que será decrescido a cada iteração, possibilitanto a
    cópia invertida. Seu valor inicial é igual ao (tamanho de temp)-1, pois parará
    de contar quando estiver em 0*/

    //iniciando j com valor (tamanho de temp)-1
    j=temp.length()-1;
    //copiando temp em v, de modo invertido
    for(i=0;i<invert.length();i++)
    {

        invert[i]=temp[j];
        j--;
    }
    return invert;
}
