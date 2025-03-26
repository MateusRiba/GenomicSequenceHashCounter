//Hash.cpp
#include "hash.h"
#include <iostream>

// Função de hash para os conjuntos de 6 letras
int hashFunction(const std::string& conjunto) {
    int hash = 0;  // Valor da Hash
    
    // Loop for que vai percorrer cada caractere do conjunto
    for (int i = 0; i < 6; i++) {
        // Hash vai ser igual a, o valor do hash atual * 31 (Valor CTE) + o valor do caractere (ASCI) da iteração atual do loop 
        hash = (hash * 31 + conjunto[i]) % 101;  // 101 poiis é o tamanho da hashTable
    }
    
    return hash;  // Retorna o valor calculado do hash
}

// Construtor da HashTable
HashTable::HashTable(int size) {
    this->size = size;
    table = new list<pair<string, int>>[size];  // Cria um vetor de listas
}

// Insere um conjunto na tabela 
void HashTable::insert(const string& conjunto) {
    int hashIndex = hashFunction(conjunto);  // Calcula o índice da tabela

    // Verifica se o conjunto já está na tabela
    for (auto& entry : table[hashIndex]) {
        if (entry.first == conjunto) {
            entry.second++;  // Se o conjunto já existe, apenas incrementa a contagem
            return;
        }
    }

    // Se o conjunto não existir, insere-o com contagem 1
    table[hashIndex].push_back({conjunto, 1});
}

// Retorna a contagem de um conjunto
int HashTable::getCount(const string& conjunto) {
    int hashIndex = hashFunction(conjunto);
    for (auto& entry : table[hashIndex]) {
        if (entry.first == conjunto) {
            return entry.second;  
        }
    }
    return 0;  // Se o bloco não existe
}

// Imprime a tabela de hash
void HashTable::printTable(ofstream& outputFile) {
    for (int i = 0; i < size; i++) {
        for (auto& entry : table[i]) {
            outputFile << entry.first << " " << entry.second << endl; //Isso serve para criar o arquivo em xt
        }
    }
}