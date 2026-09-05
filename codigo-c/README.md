# Gerenciador de Notas de Alunos em C

Um programa interativo e modular desenvolvido em linguagem C para automatizar a leitura de dados, cálculo de médias aritméticas e verificação de aprovação de alunos. Este projeto reúne e exemplifica na prática todas as principais estruturas fundamentais da linguagem.

---

**Funcionalidades**

* **Entrada de dados dinâmica**: Lê o nome do aluno e 3 notas individuais via terminal.
* **Processamento modular**: Utiliza funções dedicadas para o cálculo da média.
* **Avaliação automática**: Compara a média obtida com a nota mínima de corte (6.0) para definir o status.
* **Repetição sequencial**: Processa a quantidade desejada de alunos em lote através de um laço de repetição.

---

**Estrutura da Aplicação**

* **Estrutura de Repetição (`while`)**: Controla a execução do fluxo para processar a quantidade $N$ de alunos digitada pelo usuário.
* **Entrada e Saída (`printf` e `scanf`)**: Realiza a interface de texto para captura de dados e exibição formatada dos resultados.
* **Estrutura Condicional (`if` e `else`)**: Avalia a média do aluno para determinar a aprovação ou reprovação.
* **Funções Customizadas**:
* `calcular_media`: Função com retorno `float` responsável pela média aritmética das três notas.
* `mostrar_resultado`: Função do tipo `void` responsável por formatar a impressão do boletim na tela.



---

**Tipos de Dados Utilizados**

| Tipo | Variável | Descrição |
| --- | --- | --- |
| `int` | `quantidade`, `i` | Contadores e total de alunos cadastrados. |
| `char[]` | `nome` | Vetor de caracteres (string) para armazenar os nomes. |
| `float` | `n1`, `n2`, `n3`, `media` | Números decimais para notas e médias. |

---

**Como Compilar e Executar**

1. Clone ou baixe o código-fonte em seu ambiente de desenvolvimento.
2. Abra o terminal na pasta do arquivo e compile com o GCC:
```bash
gcc main.c -o gerenciador_notas

```


3. Execute a aplicação compilada:
```bash
./gerenciador_notas

```
