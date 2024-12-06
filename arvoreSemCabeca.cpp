#include <iostream>
using namespace std;

struct No {
    int valor;
    No* esquerda;
    No* direita;

    No(int novoValor) : valor(novoValor), esquerda(nullptr), direita(nullptr) {}
};

void inserir(No*& raiz, int valor) {
    if (!raiz)
    {
      raiz =  new No(valor);
      return;
    }
    if(valor <raiz->valor){
        inserir(raiz->esquerda,valor);
    }
    if (valor > raiz->valor)
    {
        inserir(raiz->direita, valor);
    }
}


int removeRaiz(No*& raiz){
    if(!raiz){
        return -1;
    }

    int removido = raiz->valor;

    if(!raiz->esquerda && !raiz->direita){
        raiz = nullptr;
        delete raiz;
        return removido;
    }
    if(!raiz->esquerda){
        raiz = raiz->direita;
        delete raiz;
        return removido;
    }
    if(!raiz->direita){
        raiz = raiz->esquerda;
        delete raiz;
        return removido;
    }
  
}
 

void imprimirMenorMaior(No* raiz) {

    if(!raiz){
        return;
    }
    imprimirMenorMaior(raiz->esquerda);
    cout << endl << raiz->valor;
    imprimirMenorMaior(raiz->direita);

}

void imprimirMaiorMenor(No* raiz) {
    if(!raiz){
        return;
    }
    imprimirMaiorMenor(raiz->direita);
    cout << endl << raiz-> valor;
    imprimirMaiorMenor(raiz->esquerda);
}

int main() {
    No* raiz = nullptr;

    inserir(raiz, 30);
    inserir(raiz, 60);
    inserir(raiz, 15);
    inserir(raiz, 10);
    inserir(raiz, 50);
    removeRaiz(raiz);


    cout << "Valores da árvore em ordem do menor para o maior: ";
    imprimirMenorMaior(raiz);
    cout << endl;
    
    cout << "Valores da árvore em ordem do maior para o menor: ";
    imprimirMaiorMenor(raiz);
    cout << endl;

    removeRaiz(raiz);


    return 0;
}
