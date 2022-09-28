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
    /*A partir deste ponto a vari�vel string invert ser� invertida.
    Este processo reposicionar� o �ltimo caractere da string como
    primeiro, o pen�ltimo como segundo, e assim por diante.
    Para este processo ser� necess�rio utilizar uma vari�vel
     tempor�ria, chamada aqui de temp*/

    /*O for abaixo est� alocando espa�o (preenchidos com 0's) em temp
    para que a vari�vel temp tenha "length()"igual ao de invert*/
    for(i=0;i<invert.length();i++)
    {
        temp+='0';
    }

    //agora est� sendo feita a c�pia de invert em temp, caractere por caractere
	for(i=0;i<invert.length();i++)
    {
        temp[i]=invert[i];
    }

    /*Abaixo copiaremos temp em invert de modo invertido. Para isso, al�m do contador i
    usaremos o contador j, que ser� decrescido a cada itera��o, possibilitanto a
    c�pia invertida. Seu valor inicial � igual ao (tamanho de temp)-1, pois parar�
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
