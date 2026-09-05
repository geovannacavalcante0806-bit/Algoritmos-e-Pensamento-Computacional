
# Calculadora em C (20 Funções)

**Aluno:** [Seu Nome Aqui]  
**Disciplina:** Algoritmos e Programação  

---

## 1. Título da Atividade
Desenvolvimento de Calculadora Multiuso em Linguagem C com Menu Interativo.

## 2. Nome do Aluno
Geovana Vitoria

## 3. Objetivo do Programa
Criar um programa em linguagem C que resolva cálculos matemáticos por meio de um menu no terminal. O objetivo é aplicar conceitos fundamentais de programação, como estruturas de repetição (`do-while`), controle de fluxo (`if/else`), entrada e saída de dados (`scanf`/`printf`) e integração com a biblioteca matemática nativa (`math.h`).

## 4. Funcionamento do Programa
O programa opera em um laço de repetição `do-while`. A cada iteração, ele exibe um menu de opções numeradas de 0 a 20:

1. O usuário seleciona o número correspondente à operação desejada.
2. O sistema solicita os dados de entrada necessários (como valores genéricos `a` e `b`, pesos ou medidas de temperatura e área).
3. O programa realiza validações de segurança em operações críticas (evitando divisão por zero na opção 4, denominador nulo na opção 9, pesos inválidos na opção 11 e altura menor ou igual a zero no cálculo de IMC).
4. O resultado processado é exibido diretamente no terminal.
5. O menu é exibido novamente, permitindo realizar novas operações até que a opção `0` seja informada para encerrar o programa.

---

## 5. Relação das 20 Funções Implementadas

| Opção | Função | Descrição / Fórmula |
| :---: | :--- | :--- |
| **1** | Soma | `a + b` |
| **2** | Subtração | `a - b` |
| **3** | Multiplicação | `a * b` |
| **4** | Divisão | `a / b` *(com validação para $b \neq 0$)* |
| **5** | Potência | $a^b$ utilizando a função `pow()` |
| **6** | Média Aritmética | `(a + b) / 2` |
| **7** | Produto mais Soma | `(a * b) + (a + b)` |
| **8** | Dobro de A mais B | `(2 * a) + b` |
| **9** | Porcentagem | `(a / b) * 100` *(com validação para $b \neq 0$)* |
| **10** | Triplo de A menos B | `(3 * a) - b` |
| **11** | Média Ponderada | `((a * peso1) + (b * peso2)) / (peso1 + peso2)` |
| **12** | Soma dos Quadrados | `(a * a) + (b * b)` |
| **13** | Distância entre dois Valores | `|a - b|` utilizando a função `fabs()` |
| **14** | Celsius para Fahrenheit | `(a * 9/5) + 32` |
| **15** | Potência ($a^b$) | $a^b$ utilizando a função `pow()` |
| **16** | Área do Triângulo | `(base * altura) / 2` |
| **17** | Fahrenheit para Celsius | `(a - 32) * (5/9)` |
| **18** | Área do Retângulo | `base * altura` |
| **19** | Desconto (%) | `a - (a * (b / 100))` |
| **20** | Cálculo de IMC | `peso / (altura * altura)` *(solicita peso em kg e altura em m)* |

---

## 6. Funções Requeridas
* **Cálculo de Área**: Implementado nas opções **16** (Área do Triângulo: $\frac{\text{base} \times \text{altura}}{2}$) e **18** (Área do Retângulo: $\text{base} \times \text{altura}$).
* **Cálculo de IMC**: Implementado na opção **20**, recebendo o peso em quilos (kg) e a altura em metros (m) para determinar a razão $\frac{\text{peso}}{\text{altura}^2}$.

---

## 7. Instruções para Compilação e Execução

### Pré-requisitos
* Compilador C instalado na máquina (ex: GCC).

### Passo a passo no Terminal
1. Navegue até o diretório onde o arquivo `main.c` está salvo:
   ```bash
   cd caminho/da/sua/pasta

```

2. Compile o código com o GCC (a flag `-lm` é necessária para vincular a biblioteca `math.h`):
```bash
gcc main.c -o calculadora -lm

```


3. Execute a aplicação:
* **Linux / macOS:**
```bash
./calculadora

```


* **Windows (Prompt de Comando ou PowerShell):**
```cmd
calculadora.exe

```





```

```
