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

    // Inserindo em uma chave já existente
    mapa["Tonhão"] = "Nem tá tanto assim po";
    mapa["Tonhão"] = "Pior que tá ficando mesmo";

    for (auto elemento : mapa)
    {
        cout << elemento.first << ": " << elemento.second << endl;
    }

    // Output
    // Ezequiel: Fofo
    // Igor: Fortin
    // Jarssin: Brabissimo
    // Tonhão: Pior que tá ficando mesmo

    return 0;
}
