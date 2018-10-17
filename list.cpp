//============================================================================
// Name        : ListExample.cpp
// Author      : Olegário C. S. Neto
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// construindo lists
#include <iostream>
#include <list>
using namespace std;

int escolha;

void menu()
{
    cout<<"-----------------MENU---------------------";
    cout<<"- [1] Inserir mo comeco                  -\n";       //push_from
    cout<<"- [2] Inserir mo fim                     -\n";       //push_back
    cout<<"- [3] Inserir elemento                   -\n";       //insert
    cout<<"- [4] Acessar o primeiro elemento        -\n";       //front
    cout<<"- [5] Acessar o ultimo elemento          -\n";       //back
    cout<<"- [6] Tamanho da lista                   -\n";       //size
    cout<<"- [7] Ver se esta vazia                  -\n";       //empty
    cout<<"- [8] Excluir primeiro elemento          -\n";       //pop_front
    cout<<"- [9] Excluir ultimo elemento            -\n";       //pop_back
    cout<<"- [10] Excluir elemento                  -\n";       //erase
    cout<<"- [11] Jogar elementos em outra lista    -\n";       //swap
    cout<<"- [12] Alterar tamanho da lista          -\n";       //resize
    cout<<"- [13] Limpar lista                      -\n";       //clear
    cout<<"- [14] emendar uma lista na outra        -\n";       //splice
    cout<<"- [15] Remover elemento da lista         -\n";       //remove
    cout<<"- [16] Remmover elementos com condicoes  -\n";       //remove_if
    cout<<"- [17] Remover valores iguais da lista   -\n";       //unique
    cout<<"- [18] Ordenar lista                     -\n";       //sort
    cout<<"- [19] Inverter lista                    -\n";       //reverse
    cout<<"- [20] Sair                              -\n";
    cout<<"------------------------------------------";
    cin>>escolha;

}




int main ()
{



    menu();


    // Construtores utilizados em alguma ordem como descrito anteriormente:
    list<int> lista1;
    list<int> lista2;
  
  
  for(list<int>::iterator it = lista.begin(); it != lista.end(); it++)
      cout<<*it<<endl;
  
  
  
    // o iterator constructor pode também ser usado para construir a partir arrays:
    int myints[] = {16,2,77,29};
    list<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );
  
    cout << "The contents of fifth are: ";
    for (std::list<int>::iterator it = fifth.begin(); it != fifth.end(); it++)
      cout << *it << ' ';
  
    cout << '\n';
  
    return 0;
}
