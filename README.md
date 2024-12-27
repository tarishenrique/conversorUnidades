# Como utilizar o Sistema para realizar as conversões

1. Unidades de temperatura - Emerson
   1. Passo 1
   1. Passo 2
   1. Passo 3
1. Unidades de comprimento - Matheus

Passo 1:   Selecione a opção no menu inicial do sistema:
Escolha o tipo de conversão desejada:
Exemplo: "1. Metros para Centímetros".
Digite o valor que deseja converter:

Passo 2: Insira o valor numérico que será convertido.
Exemplo: "5 metros".

Passo 3: Visualize o resultado na tela:
O sistema mostrará a conversão realizada.
Exemplo: "5.00 metros = 500.00 centímetros".

1. Unidades de velocidade - Ane
   1. Passo 1
   1. Passo 2
   1. Passo 3
1. Unidades de tempo - Thiago
   1. Passo 1
   1. Passo 2
   1. Passo 3
1. Unidades de area - Ian
   1. Primeiro Digite o valor a ser convertido
   1. Digite o codigo correspondente ao tipo de unidade original de sua area
   1. Digite o codigo do tipo a ser convertido
1. Unidades de volume - Hendrick
   1. Selecione a opção 6 no menu inicial do Sistema
   1. Escolha o tipo de conversão desejada (Ex. 5. Metro cubico -> Litro)
   1. Digite o valor que deseja converter e o sistema mostrará o resultado da conversão
1. Unidades de massa - Rayane
   1. Passo 1
      Selecione a opção número 7 no menu inicial do sistema.
   1. Passo 2
      Escolha o tipo de conversão desejada (Ex: 1. Gramas para Quilogramas(kg)).
   1. Passo 3
      Digite o valor desejado para conversão e o sistema mostrará o valor final convertido.
1. Dados (Bits, Bytes, etc.) - Taris
   1. Selecione a opção 8 no menu inicial do Sistema
   1. Escolha o tipo de conversão desejada (Ex. 7. Gigabytes para Megabytes)
   1. Digite o valor que deseja converter e o sistema mostrará o valor final convertido
1. Potencia (Watts, kW, cavalos-vapor) - Canario
   1. Passo 1:
   Escolha o numero que corresponda ao conversor de potencia,

   Apos isso escolha a unidade de entrada:

        O programa exibirá o menu com opções de unidades de potência (1 para WATTS, 2 para KWATTS, 3 para CAVALOS VAPOR).

        Digite o número correspondente à unidade que deseja converter.

    1. Passo 2: 
    Digite o valor a ser convertido:

        Insira o valor que você deseja converter na unidade selecionada.
    1. Passo 3:
    Veja os resultados:

# Como Compilar

Para compilar o projeto, siga os passos abaixo:

1. Abra o terminal no diretório raiz do projeto.
2. Utilize o comando a seguir para compilar os arquivos principais:

   ```bash
   gcc main.c comprimento.c volume.c -o conversor
   ```

3. Adicionece os demais arquivos .c a compilação a medida que forem criados

4. Configuração de Depuração no VS Code

Abaixo está um exemplo de configuração de depuração no Visual Studio Code para um projeto C++ utilizando GDB:

```json
{
    "version": "0.2.0",
    "configurations": [
        {
            "name": "Executar Programa",
            "type": "cppdbg",
            "request": "launch",
            "program": "${workspaceFolder}/output/${fileBasenameNoExtension}.exe",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${fileDirname}",
            "environment": [],
            "externalConsole": false,
            "MIMode": "gdb",
            "miDebuggerPath": "C:/msys64/ucrt64/bin/gdb.exe",
            "preLaunchTask": "C/C++: gcc.exe embarcatech1",
            "setupCommands": [
                {
                    "description": "Habilitar impressão de valores para gdb",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                },
                {
                    "description": "Configurar diretório de fontes",
                    "text": "directory ${workspaceFolder}/src",
                    "ignoreFailures": true
                }
            ]
        }
    ]
}
```

5. Configuração do task.json

```json
{
    "tasks": [
        {
            "type": "cppbuild",
            "label": "C/C++: gcc.exe embarcatech1",
            "command": "C:/msys64/ucrt64/bin/gcc.exe",
            "args": [
                "-fdiagnostics-color=always",
                "-g3",
                "-Wall",
                "-Wextra",
                "${workspaceFolder}/*.c",
                "-o",
                "${fileDirname}\\output\\${fileBasenameNoExtension}.exe"
            ],
            "options": {
                "cwd": "${fileDirname}"
            },
            "problemMatcher": [
                "$gcc"
            ],
            "group": "build",
            "detail": "compiler: C:/msys64/ucrt64/bin/gcc.exe"
        }
    ],
    "version": "2.0.0"
}
```

