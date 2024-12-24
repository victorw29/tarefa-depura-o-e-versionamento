# Embarcatech - Tarefa Unidade 3 - Depuração e Versionamento

# Conversor de Unidades

Este software é um **Conversor de Unidades** que permite converter valores entre diferentes sistemas de medidas. Ele suporta conversões de comprimento, temperatura, massa, volume, tempo e velocidade.

## Funcionalidades

### 1. Comprimento

Converte unidades de comprimento entre:

- Metros (m);
- Centímetros (cm);
- Milímetros (mm);

### 2. Volume

Converte unidades de volume entre:

- Litros (L);
- Mililitros (mL);
- Metros cúbicos (m³);

### 3. Massa

Converte unidades de massa entre:

- Quilogramas (kg);
- Gramas (g);

### 4. Tempo

Converte unidades de tempo entre:

- Horas;
- Minutos;
- Segundos;

### 5. Energia

Converte unidades de energia entre:

- Joules (J);
- Quilowatt-horas (kWh);
- Calorias (cal);

### 6. Pressão

Converte unidades de pressão atmosférica entre:

- Pascal (Pa);
- Pressão Atmosférica (atm);
- Milímetros de Mercúrio (mmHg); 

### 7.Temperatura

Converte temperaturas entre:

- Celsius (°C);
- Kelvin (K);
- Fahrenheit (°F);

## Como Usar

### Pré-requisitos

- Compilador C (ex.: GCC)
- Sistema operacional compatível com comandos como `system("cls")` ou `system("clear")`

### Passos para Compilação e Execução

1. **Baixe o arquivo `main.c`.**

2. **Compile o programa:**

   ```bash
   gcc main.c comprimento.c volume.c massa.c tempo.c energia.c pressao.c Temperatura.c -o conversor
   ```

3. **Execute o programa:**
   ```bash
   ./conversor
   ```

### Navegação pelo Programa

1. Ao iniciar o programa, você verá um menu com as opções disponíveis:

   - `[1] Comprimento`
   - `[2] Volume`
   - `[3] Massa`
   - `[4] Tempo`
   - `[5] Energia`
   - `[6] Pressão`
   - `[7] Temperatura`
   - `[8] Sair`

2. **Escolha uma opção digitando o número correspondente** e pressione `Enter`.

3. Siga as instruções na tela para fornecer:

   - O valor que deseja converter.
   - A unidade de origem.
   - A unidade de destino.

4. O programa exibirá o resultado da conversão.

5. **Para sair, selecione a opção `[8]`.**

### Exemplos de Uso

#### Conversão de Comprimento

- Escolha a opção `1` no menu.
- Digite o valor, a unidade de origem (ex.: metros) e a unidade de destino (ex.: centímetros).
- O resultado será exibido na tela.

#### Conversão de Temperatura

- Escolha a opção `2` no menu.
- Insira a temperatura inicial (ex.: 25°C), selecione a unidade de origem (ex.: Celsius) e a unidade de destino (ex.: Kelvin).
- O resultado será exibido.

### Observações

- Para limpar a tela, o programa utiliza `system("cls")` (Windows) ou `system("clear")` (Linux/Mac). Certifique-se de que seu sistema suporta este comando.
- Para evitar erros de entrada, o programa valida os valores digitados.

## Contribuição

Contribuições são bem-vindas! Sinta-se à vontade para melhorar o programa ou adicionar novas funcionalidades.

1. Faça um _fork_ do repositório.
2. Crie uma nova _branch_ para suas alterações:
   ```bash
   git checkout -b minha-alteracao
   ```
3. Envie um _pull request_ após concluir as modificações.

## Colaboradores

Segue abaixo os perfis colaboradores deste projeto:

- [AnaBeatriz](https://github.com/anabeatrizsse1) (Conversor de comprimento);
- [Gabriela](https://github.com/gbdeiro) (Conversor de Energia);
- [JonathanMatos](https://github.com/JonathanMatos25) (Conversor de Temperatura);
- [PedroAlonso](https://github.com/pedroalonso19) (Conversor de Massa);
- [Davi](https://github.com/Pr0wer) (Conversor de Tempo);
- [UalaceHenrique](https://github.com/UalaceCafe) (Conversor de Pressão);
- [ViniciusPaz](https://github.com/V1n1Paz) (Conversor de Volume);
- [VictorWeverthon](https://github.com/victorw29) (Menu);
