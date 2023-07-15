#include <iostream>
#include <iomanip>
#include <string>
#include <map>

using namespace std;

int main()
{
    int n = 0;        // Variável para armazenar o número de casos de teste
    int contador = 0; // Variável para acompanhar o número de casos de teste processados

    cin >> n; // Lê o número de casos de teste fornecidos pelo usuário

    while (contador < n) // Repete o código até que todos os casos de teste sejam processados
    {
        map<string, double> produtos; // Cria um mapa para armazenar produtos e seus preços
        double totalGasto = 0.0;      // Variável para armazenar o valor total gasto em cada caso de teste
        int produtosDisponiveis = 0;  // Variável para armazenar o número de produtos disponíveis

        cin >> produtosDisponiveis; // Lê o número de produtos disponíveis para o caso de teste atual

        for (int i = 0; i < produtosDisponiveis; i++)
        {
            string produto; // Variável para armazenar o nome do produto
            double preco;   // Variável para armazenar o preço do produto

            cin >> produto >> preco; // Lê o nome e o preço de cada produto disponível

            produtos[produto] = preco; // Armazena o nome e o preço do produto no mapa
        }

        int quantidade = 0;    // Variável para armazenar o número total de produtos a serem comprados
        string produtoComprar; // Variável para armazenar o nome do produto a ser comprado
        int produtoQuantidade; // Variável para armazenar a quantidade do produto a ser comprado

        cin >> quantidade; // Lê o número total de produtos a serem comprados

        for (int i = 0; i < quantidade; i++)
        {
            cin >> produtoComprar >> produtoQuantidade;                 // Lê o nome e a quantidade de cada produto a ser comprado
            totalGasto += produtos[produtoComprar] * produtoQuantidade; // Calcula o valor total gasto somando o preço do produto multiplicado pela quantidade
        }

        cout << "R$ " << setprecision(2) << fixed << totalGasto << endl; // Exibe o valor total gasto formatado com duas casas decimais
        contador++;                                                      // Incrementa o contador para processar o próximo caso de teste
    }

    return 0;
}
