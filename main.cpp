//Main.cpp

#include <iostream>
#include <fstream>
#include <unordered_map>
#include <string>
#include "hash.h"
#include "hash.cpp"  

using namespace std;

int main() {
    // ifstream abre o arquivo de entrada que contém a sequencia
    ifstream inputFile("SequenciaTeste.txt");  
    if (!inputFile) {  
        cout << "Erro ao abrir o arquivo" << endl;
        return 1;
    }

    // Var da Linha
    string linhaAtual;
    
    // Chamada da tabela Hash
    HashTable tabela(101); 

    // Lê o arquivo linha por linha
    while (getline(inputFile, linhaAtual)) {
        // ignora a ultima linha caso ela tenha menos de 60 caracteres
        if (linhaAtual.size() < 60) {
            continue;  // Sai do loop se a linha não tiver 60 caracteresS
        }
        
        for (int i = 0; i <= linhaAtual.size() - 6; i++) {
            string conjunto = linhaAtual.substr(i, 6);  // Extrai um bloco de 6 caracteres
            tabela.insert(conjunto);  // Insere o bloco na tabela de hash
    }

    // Fecha o arquivo após a leitura
    inputFile.close();

    // Imprime os resultados
    tabela.printTable();

    return 0;
} 
}