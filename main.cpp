#include <iostream>

#include "testes_entidades.h"
#include "testes_dominios.h"

int main(){

//---------------------------------------------------------------------------------------------
// Dominios
//---------------------------------------------------------------------------------------------
    std::cout << "Teste de Dominios de Teste" << std::endl;
    TUCodigo testeCodigo;
    TUClasse testeClasse;
    TUTexto testeTexto;
    TUData testeData;
    TUMatricula testeMatricula;
    TUResultado testeResultado;
    TUSenha testeSenha;
    TUTelefone testeTelefone;

    switch(testeCodigo.run()){
        case TUCodigo::SUCESSO:
            std::cout << "SUCESSO - Teste de Codigo" << std::endl;
            break;
        case TUCodigo::FALHA:
            std::cout << "FALHA - Teste de Codigo" << std::endl;
            break;
    }

    switch(testeClasse.run()){
        case TUClasse::SUCESSO:
            std::cout << "SUCESSO - Teste de Classe" << std::endl;
            break;
        case TUClasse::FALHA:
            std::cout << "FALHA - Teste de Classe" << std::endl;
            break;
    }

    switch(testeTexto.run()){
        case TUTexto::SUCESSO:
            std::cout << "SUCESSO - Teste de Texto" << std::endl;
            break;
        case TUTexto::FALHA:
            std::cout << "FALHA - Teste de Texto" << std::endl;
            break;
    }

    switch(testeData.run()){
        case TUData::SUCESSO:
            std::cout << "SUCESSO - Teste de Data" << std::endl;
            break;
        case TUData::FALHA:
            std::cout << "FALHA - Teste de Data" << std::endl;
            break;
    }

    switch(testeMatricula.run()){
        case TUMatricula::SUCESSO:
            std::cout << "SUCESSO - Teste de Matricula" << std::endl;
            break;
        case TUMatricula::FALHA:
            std::cout << "FALHA - Teste de Matricula" << std::endl;
            break;
    }

    switch(testeResultado.run()){
        case TUResultado::SUCESSO:
            std::cout << "SUCESSO - Teste de Resultado" << std::endl;
            break;
        case TUResultado::FALHA:
            std::cout << "FALHA - Teste de Resultado" << std::endl;
            break;
    }

    switch(testeSenha.run()){
        case TUSenha::SUCESSO:
            std::cout << "SUCESSO - Teste de Senha" << std::endl;
            break;
        case TUSenha::FALHA:
            std::cout << "FALHA - Teste de Senha" << std::endl;
            break;
    }

    switch(testeTelefone.run()){
        case TUTelefone::SUCESSO:
            std::cout << "SUCESSO - Teste de Telefone" << std::endl;
            break;
        case TUTelefone::FALHA:
            std::cout << "FALHA - Teste de Telefone" << std::endl;
            break;
    }

//---------------------------------------------------------------------------------------------
// Entidades
//---------------------------------------------------------------------------------------------
    std::cout << "Teste de Entidades de Teste" << std::endl;

    TUTeste testeTeste;
    TUDesenvolvedor testeDesenvolvedor;
    TUCasoTeste testeCasoTeste;

    switch(testeTeste.run()){
        case TUTeste::SUCESSO:
            std::cout << "SUCESSO - Teste de Teste" << std::endl;
            break;
        case TUTeste::FALHA:
            std::cout << "FALHA - Teste de Teste" << std::endl;
            break;
    }

    switch(testeDesenvolvedor.run()){
        case TUDesenvolvedor::SUCESSO:
            std::cout << "SUCESSO - Teste de Desenvolvedor" << std::endl;
            break;
        case TUDesenvolvedor::FALHA:
            std::cout << "FALHA - Teste de Desenvolvedor" << std::endl;
            break;
    }

    switch(testeCasoTeste.run()){
        case TUCasoTeste::SUCESSO:
            std::cout << "SUCESSO - Teste de Caso de Teste" << std::endl;
            break;
        case TUCasoTeste::FALHA:
            std::cout << "FALHA - Teste de Caso de Teste" << std::endl;
            break;
    }
    return 0;
}
