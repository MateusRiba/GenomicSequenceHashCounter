//hash.h
#ifndef HASH_H
#define HASH_H

#include <string>
#include <list>

using namespace std;

// Função de hash
int hashFunction(const string& conjunto);

// Estrutura da Tabela de Hash
class HashTable {
public:
    HashTable(int size);  // Construtor
    void insert(const string& conjunto); 
    int getCount(const string& conjunto);  
    void printTable(ofstream& outputFile);  

private:
    int size;  // Tamanho da tabela de hash
    list<pair<string, int>>* table;  
};

#endif
