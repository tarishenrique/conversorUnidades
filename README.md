# Como utilizar o Sistema para realizar as conversões

1. Unidades de temperatura - Emerson
   1. O programa de conversão de temperatura realiza a conversão entre as mais diferentes escalas possíveis (Celsius, Fahrenheit e Kelvin). Permite a conversão entre qualquer uma delas e ainda exibe o resultado da conversão na tela;
   2. Para converter, o usuário deve digitar uma tecla no menu correspondente as escalas a serem convertidas. Após inserir os dados, o programa exibe na tela os valores convertidos e ajustados;
   3. O programa previne e trata o uso incorreto, como a escolha de um item não correspondente no menu também que temperaturas abaixo do zero absoluto (escala Kelvin) sejam escolhidas em qualquer uma das outras escalas, o que estaria fisicamente errado.
1. Unidades de comprimento - Matheus
   1. Passo 1
   1. Passo 2
   1. Passo 3
1. Unidades de velocidade - Ane
   1. Passo 1
   1. Passo 2
   1. Passo 3
1. Unidades de tempo - Thiago
   1. Passo 1
   1. Passo 2
   1. Passo 3
1. Unidades de area - Ian
   1. Passo 1
   1. Passo 2
   1. Passo 3
1. Unidades de volume - Hendrick
   1. Passo 1
   1. Passo 2
   1. Passo 3
1. Unidades de massa - Rayane
   1. Passo 1
   1. Passo 2
   1. Passo 3
1. Dados (Bits, Bytes, etc.) - Taris
   1. Passo 1
   1. Passo 2
   1. Passo 3
1. Potencia (Watts, kW, cavalos-vapor) - Canario
   1. Passo 1
   1. Passo 2
   1. Passo 3

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

