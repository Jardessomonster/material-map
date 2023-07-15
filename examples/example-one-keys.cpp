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

    // Criando um iterator apontado para o primeiro elemento do map
    map<string, string>::iterator it = mapa.begin();

    while (it != mapa.end())
    {
        cout << it->first << " é " << it->second << endl;
        ++it;
    }

    // Output
    // Ezequiel é Fofo
    // Igor é Fortin
    // Jarssin é Brabissimo
    // Tonhão é Calvo

    return 0;
}
