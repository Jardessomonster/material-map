#include <iostream>
#include <string>
#include <map>

using namespace std;

// Criando um map de professores do algoritmo escola e relacionando a um adjetivo :)
int main()
{
    // Criando um mapa com chave do tipo string e valor do tipo string
    map<string, string> mapa;

    // Inserindo dados na estrutura
    mapa["Jarssin"] = "Brabissimo";
    mapa["Igor"] = "Fortin";
    mapa["Ezequiel"] = "Fofo";
    // Ou
    mapa.insert(make_pair("Tonhão", "Calvo"));

    // Procurando o careca
    cout << mapa["Tonhão"] << endl;
    // Ou
    cout << mapa.find("Tonhão")->second << endl;
    // Output
    // Calvo
    // Calvo

    return 0;
}
