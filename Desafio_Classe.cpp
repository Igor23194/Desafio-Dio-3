#include <iostream>
#include <string>

using namespace std;


//Crie uma classe generica que represente um herói de uma aventura e que possua as seguintes propriedades:

//- nome - idade - tipo (ex: guerreiro, mago, monge, ninja )

//além disso, deve ter um método chamado atacar que deve atender os seguientes requisitos:

//- exibir a mensagem: "o {tipo} atacou usando {ataque}")
//- aonde o {tipo} deve ser concatenando o tipo que está na propriedade da classe
//- e no {ataque} deve seguir uma descrição diferente conforme o tipo, seguindo a tabela abaixo:

//se mago -> no ataque exibir (usou magia)
//se guerreiro -> no ataque exibir (usou espada)
//se monge -> no ataque exibir (usou artes marciais)
//se ninja -> no ataque exibir (usou shuriken)

//## Saída

//Ao final deve se exibir uma mensagem:
//- "o {tipo} atacou usando {ataque}"
//ex: mago atacou usando magia
//guerreiro atacou usando espada

class Heroi_generico{


    public:
        string name;
        string player_attack;
        string player_type;
        string type[4] = {"Mago", "Guerreiro", "Monge", "Ninja"};

        int age;

        void ataque(){
            cout << "É um " << player_type << " e atacou usando " << player_attack << endl; 
        }


    
};



int main(){

    int ponteiro = 0;
    Heroi_generico obj_heroi;
    obj_heroi.type;

    cout << "Nome do Heroi: \n";
    getline(cin,obj_heroi.name);

    cout << "Idade do Heroi: \n" ;
    cin >> obj_heroi.age;

    cin.ignore(256, '\n'); 
    cout << "Especialidade do Heroi: \n";
    cout << "Mago, Guerreiro, Monge, Ninja \n";
    getline(cin,obj_heroi.player_type);

    
 // Escolha de Ataque
    if(obj_heroi.player_type == obj_heroi.type[0]){
        ponteiro = 1;
    }else if(obj_heroi.player_type == obj_heroi.type[1]){
        ponteiro = 2;
    }else if(obj_heroi.player_type == obj_heroi.type[2]){
        ponteiro = 3;
    }else if(obj_heroi.player_type == obj_heroi.type[3]){
        ponteiro = 4;
    }else{

        cout << "Especialidade Invalida" << endl;
        return 0;
    }


    switch (ponteiro){
    case 1:
        
        obj_heroi.player_attack = "magia";
        break;

    case 2:

        obj_heroi.player_attack = "espada";
        break;
    
    case 3:

        obj_heroi.player_attack = "artes marciais";
        break;

    case 4:

        obj_heroi.player_attack = "shuriken";
        break;
    
    }


    cout << obj_heroi.name <<" de idade " << obj_heroi.age << " anos" << '\n';
    obj_heroi.ataque();

}


