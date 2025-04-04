# GenomicSequenceHashCounter

Este repositório contém uma implementação para análise de sequências de genoma utilizando tabelas de hash. O objetivo é contar a frequência de blocos consecutivos de 6 bases no genoma do coronavírus. A análise é feita em blocos de 6 caracteres extraídos de linhas de 60 caracteres do genoma, e os resultados são gravados em um arquivo de saída.

## Funcionalidade

- Lê o arquivo contendo a sequência do genoma do coronavírus.
- Divide a sequência em blocos consecutivos de 6 bases (A, T, C, G).
- Conta a frequência de ocorrência de cada bloco no genoma.
- Utiliza uma tabela de hash para armazenar e contar as ocorrências.
- Gera um arquivo de saída contendo os blocos de 6 bases e suas respectivas contagens.

## Estrutura do Projeto

- **Main.cpp**: Arquivo principal onde a sequência do genoma é lida e a análise é realizada.
- **Hash.cpp**: Implementação da tabela de hash que armazena os blocos de 6 bases.
- **Hash.h**: Definição da estrutura da tabela de hash.
- **Arquivos de texto**: Gerados ou usados, contem inputs e outputs.

## Como Usar

1. **Clone o repositório:**

   ```bash
   git clone https://github.com/seu-usuario/GenomicSequenceHashCounter.git
   cd GenomicSequenceHashCounter
   ```

2. **Prepare o arquivo de entrada:**
   
   Coloque o arquivo `SequenciaTeste.txt` contendo o genoma que será analisado na mesma pasta do projeto.

3. **Compile o código:**

   Se estiver utilizando g++, você pode compilar os arquivos da seguinte maneira:

   ```bash
   g++ -o genomic_analysis Main.cpp Hash.cpp
   ```

4. **Execute o programa:**

   Após compilar, execute o programa:

   ```bash
   ./genomic_analysis
   ```

   O programa irá processar a sequência do genoma e gerar um arquivo de saída chamado `resultado_hashAtual.txt`.

## Exemplo de Saída

O arquivo de saída `resultado_hashAtual.txt` terá a seguinte estrutura (exemplo):

```
ATTAAA 3
AGGTTT 2
...
```

Onde o primeiro valor é o bloco de 6 bases e o segundo é o número de ocorrências desse bloco no genoma.
