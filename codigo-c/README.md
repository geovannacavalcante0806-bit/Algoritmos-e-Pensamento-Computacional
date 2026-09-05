```markdown
# Calculadora em C (20 Funções)

**Aluno:** [Seu Nome Aqui]  
**Disciplina:** Algoritmos e Programação  

## 1. Título da Atividade
Desenvolvimento de Calculadora Multiuso em Linguagem C com Menu Interativo.

## 2. Nome do Aluno
[Seu Nome Aqui]

## 3. Objetivo do Programa
Criar um programa em linguagem C que resolva cálculos matemáticos do dia a dia por meio de um menu no terminal. O objetivo é aplicar conceitos básicos de programação, como estruturas de repetição (`do-while`), controle de fluxo (`if/else`), entrada e saída de dados (`scanf`/`printf`) e inclusão de bibliotecas nativas (`math.h`).

## 4. Funcionamento do Programa
O programa roda dentro de um laço `do-while`. Quando executado, ele limpa ou exibe na tela um menu numerado de 0 a 20:

1. O usuário digita o número da opção desejada.
2. O programa pede os valores de entrada necessários (como `a` e `b`, ou notas e pesos).
3. É feita uma validação simples para evitar erros na execução (como divisão por zero ou altura igual a zero).
4. O resultado é calculado e mostrado direto na tela.
5. O menu reaparece automaticamente para uma nova operação até que a opção `0` seja informada para sair.

---

## 5. Relação das 20 Funções Implementadas

| Opção | Função | Descrição / Fórmula |
| :---: | :--- | :--- |
| **1** | Soma | `a + b` |
| **2** | Subtração | `a - b` |
| **3** | Multiplicação | `a * b` |
| **4** | Divisão | `a / b` *(com tratamento para $b \neq 0$)* |
| **5** | Potência | $a^b$ utilizando a função `pow()` |
| **6** | Média Aritmética | `(a + b) / 2` |
| **7** | Produto mais Soma | `(a * b) + (a + b)` |
| **8** | Dobro de A mais B | `(2 * a) + b` |
| **9** | Porcentagem | `(a / b) * 100` |
| **10** | Triplo de A menos B | `(3 * a) - b` |
| **11** | Média Ponderada | `((a * peso1) + (b * peso2)) / (peso1 + peso2)` |
| **12** | Soma dos Quadrados | `(a * a) + (b * b)` |
| **13** | Distância entre dois Valores | `|a - b|` utilizando a função `fabs()` |
| **14** | Celsius para Fahrenheit | `(a * 9/5) + 32` |
| **15** | Potência ($a^b$) | Recálculo de potência via `pow(a, b)` |
| **16** | Área do Triângulo | `(base * altura) / 2` |
| **17** | Fahrenheit para Celsius | `(a - 32) * (5/9)` |
| **18** | Área do Retângulo | `base * altura` |
| **19** | Desconto (%) | `a - (a * (b / 100))` |
| **20** | Cálculo de IMC | `peso / (altura * altura)` |

---

## 6. Funções Obrigatórias Requeridas
* **Cálculo de Área**: Implementado nas opções **16** (Área do Triângulo: $\frac{\text{base} \times \text{altura}}{2}$) e **18** (Área do Retângulo: $\text{base} \times \text{altura}$).
* **Cálculo de IMC**: Implementado na opção **20**, recebendo o peso em quilos e a altura em metros ($\frac{\text{peso}}{\text{altura}^2}$).

---

## 7. Instruções para Compilação e Execução

### Pré-requisitos
* Compilador C instalado (ex: GCC).

### Passo a passo no Terminal
1. Navegue até a pasta onde o arquivo `main.c` está salvo:
   ```bash
   cd caminho/da/sua/pasta

```

2. Compile o código usando o GCC (a flag `-lm` vincula a biblioteca `math.h`):
```bash
gcc main.c -o calculadora -lm

```


3. Execute o programa gerado:
* **Linux/macOS:**
```bash
./calculadora

```


* **Windows (Prompt/PowerShell):**
```cmd
calculadora.exe

```





```

```
