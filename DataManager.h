#ifndef _DATAMANAGER_H_
#define _DATAMANAGER_H_

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class DataManager {
private:	// Atributos
    ofstream escrita;					// Objeto utilizado para escrever no arquivo "txt"
    ifstream leitura;					// Objeto utilizado para leitura no arquivo "txt"
    vector< vector<string> > info;		// Objeto que utilizaremos para separar os textos do arquivo

public:		// Métodos
    DataManager();	// Construtor Padrão

    // Método de Escrita
    void salvar(string file, string data, bool end = false);

    // Método que irá ler, separa cada Pessoa e armazenar no vector "info"
    void ler(string file);

    // Esse método retorna uma pessoa do vector na posição indicada como parâmetro
    string getData(string file, int linha, int posicao);

    // Retorna a quantidade de "Linhas" armazenadas
    int getQuantidade(string file);

    // Imprime todo o Banco de Dados
    void printBD(string file);
};

#endif
