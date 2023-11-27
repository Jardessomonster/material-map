#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main()
{
    map<string, vector<string>> mapa;
    mapa["Jarsson"].push_back("porshe");
    mapa["Jarsson"].push_back("Patinete eletrico");
    mapa["Jarsson"].push_back("Moto");

    mapa["Tonhão"].push_back("Cabelo");

    for (auto map : mapa)
    {
        for (auto vec : map.second)
        {
            cout << map.first << " " << vec << endl;
        }
    }

    return 0;
}
