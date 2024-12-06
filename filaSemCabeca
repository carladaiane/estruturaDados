#include <iostream>
using namespace std;

struct No {
    string nome;
    No* proximo;
    
    No(string nome){
        this->nome = nome;
       proximo = nullptr;
    }
};


void adicionar(No*& primeiro, No*& ultimo, No*& adicionado){
    if(!primeiro){
        primeiro = adicionado;
        ultimo = adicionado;
        return;
    }
            
   ultimo->proximo = adicionado;
 
   ultimo = adicionado;
    
}

No* remover(No*& primeiro, No*& ultimo){
    
    No* removido = nullptr;
    
    if (!primeiro){
        return nullptr;
    }
    
    if(primeiro==ultimo){
        removido = primeiro;
        
        primeiro = nullptr;
        ultimo = nullptr;
        
        return removido;
        
    }
    
    removido = primeiro;
    
    primeiro = primeiro->proximo;
    
    return removido;
}




void print(No* primeiro){
    if(!primeiro){
        return;
    }
    
    No* aux = primeiro;
    
    while(aux){
        if(!aux->proximo){
            cout << aux->nome <<  "=> " << "nullptr";
            break;
        }
        
        cout << aux->nome <<  "=> ";
        aux = aux->proximo;
    }
    cout << endl;
}



int main() {
    
    No* primeiro = nullptr;
    No* ultimo = nullptr;
    
    No* no = new No("Carla");
    No* no2 = new No("Ana");
    No* no3 = new No("Mateus");

    adicionar(primeiro, ultimo, no);
    
    adicionar(primeiro, ultimo, no2);
    
    adicionar(primeiro, ultimo, no3);
    
    print(primeiro);
    
    remover(primeiro, ultimo);  
    
    
    print(primeiro);
    
    return 0;
}
