// Purpose: This file contains the implementation of the class dominios.
/**
 * @file dominios.cpp
 *
 * @brief
 * Implementação dos métodos da classe dominios.
 *
 * @details
 * O arquivo dominios.cpp contém a implementação dos métodos das classes Codigo, Classe, Nome, Telefone, Endereco, Data e Email.
*/
#include "dominios.h"
#include <iostream>
#include <string>

/**
 * @brief Valida o texto.
 *
 * @details
 * Valida o texto, verificando se ele possui apenas letras, espaços e pontos.
 *
 * @param Texto a ser validado.
*/
#include <stdexcept>
#include <regex>

using namespace std;

// ---------------------------------------------------------------------------------
// Validar da Classe Codigo
// ---------------------------------------------------------------------------------

void Codigo::validar(string codigo){
    regex formato("[A-Za-z]{3}[0-9]{3}$");

    /**
     * Se o match não for correto, lança uma exceção.
    */
    if(!regex_match(codigo, formato)){
        throw invalid_argument("Codigo invalido.");
    }
}

void Codigo::setCodigo(string codigo){
    validar(codigo);

    /**
     * Se o código for válido, seta o código.
     *
    */
    this->codigo = codigo;
}

// ---------------------------------------------------------------------------------
// Validar da Classe Classe
// ---------------------------------------------------------------------------------

void Classe::validar(string classe){
    regex formato("^UNIDADE|INTEGRAÇÃO|FUMACA|SISTEMA|REGRESSAO|ACEITACAO$");

    /**
     * Se o match não for correto, lança uma exceção.
    */
    if(!regex_match(classe, formato)){
        throw invalid_argument("Classe invalida.");
    }
}

void Classe::setClasse(string classe){
    validar(classe);

    /**
     * Se a classe for válida, seta a classe.
     *
    */
    this->classe = classe;
}

// ---------------------------------------------------------------------------------
// Validar da Classe texto
// ---------------------------------------------------------------------------------

void Texto::validar(string texto){
    regex formato("^([A-Za-z0-9\\(\\.\\,\\;\\:\\!\?\\-)\\@\\#\\$\\%\\&] ?)+$");

    /**
     * Se o match não for correto, lança uma exceção.
    */
    if(!regex_match(texto, formato) || texto.length() < 10 || texto.length() > 20){
        throw invalid_argument("Texto invalido.");
    }
}

void Texto::setTexto(string texto){
    validar(texto);

    /**
     * Se o texto for válido, seta o texto.
     *
    */
    this->texto = texto;
}

// ---------------------------------------------------------------------------------
// Validar da Classe Data
// ---------------------------------------------------------------------------------

void Data::validar(string data){
    regex formato("^(?:(?:0[1-9]|[12]\\d|3[01])\\/(?:0[13578]|1[02])|(?:0[1-9]|[12]\\d|30)\\/(?:0[469]|11)|(?:0[1-9]|1\\d|2[0-8])\\/02)\\/\\d{4}$|^(?:29\\/02\\/(?:(?:1[6-9]|[2-9]\\d)(?:0[48]|[2468][048]|[13579][26])|(?:16|[2468][048]|[3579][26])00)|(?:0[1-9]|[12]\\d|3[01])\\/(?:0[13578]|1[02])\\/(?:(?!00)\\d{2}(?:0[48]|[2468][048]|[3579][26])|(?:[2468][048]|[3579][26])00))$");

    /**
     * Se o match não for correto, lança uma exceção.
    */
    if(!regex_match(data, formato)){
        throw invalid_argument("Data invalida.");
    }

    /**
     * Verifica se o dia é válido.
    */
    if(stoi(data.substr(0,2)) < 31){
        throw invalid_argument("Data invalida.");
    }

    /**
     * Verifica se o mês é válido.
    */
   // Verificar se o mês existe no array de meses
    string meses[12] = {"JAN", "FEV", "MAR", "ABR", "MAI", "JUN", "JUL", "AGO", "SET", "OUT", "NOV", "DEZ"};

    bool mesValido = false;
    for(int i = 0; i < 12; i++){
        if(data.substr(3,2) == meses[i]){
            mesValido = true;
        }
    }

    if(!mesValido){
        throw invalid_argument("Data invalida.");
    }


    /**
     * Verifica se o ano é válido.
    */
    if(stoi(data.substr(6,4)) > 2000 || stoi(data.substr(6,4)) < 2999){
        throw invalid_argument("Data invalida.");
    }
}

void Data::setData(string data){
    validar(data);

    /**
     * Se a data for válida, seta a data.
     *
    */
    this->data = data;
}

// ---------------------------------------------------------------------------------
// Validar da Classe Matricula
// ---------------------------------------------------------------------------------

void Matricula::validar(string matricula){
    regex formato("^\\d{5}-\\d$");

    /**
     * Se o match não for correto, lança uma exceção.
    */
    if(!regex_match(matricula, formato)){
        throw invalid_argument("Matricula invalida.");
    }
}

void Matricula::setMatricula(string matricula){
    validar(matricula);

    /**
     * Se a matricula for válida, seta a matricula.
     *
    */
    this->matricula = matricula;
}

// ---------------------------------------------------------------------------------
// Validar da Classe Resultado
// ---------------------------------------------------------------------------------

void Resultado::validar(string resultado){
    regex formato("^(APROVADO|REPROVADO)$");

    /**
     * Se o match não for correto, lança uma exceção.
    */
    if(!regex_match(resultado, formato)){
        throw invalid_argument("Resultado invalido.");
    }
}

void Resultado::setResultado(string resultado){
    validar(resultado);

    /**
     * Se o resultado for válido, seta o resultado.
     *
    */
    this->resultado = resultado;
}

// ---------------------------------------------------------------------------------
// Validar da Classe Senha
// ---------------------------------------------------------------------------------

void Senha::validar(string senha){
    regex formato("^(?!.*(.).*\1)[A-Za-z0-9@$%&]{6}$");

    /**
     * Se o match não for correto, lança uma exceção.
    */
    if(!regex_match(senha, formato)){
        throw invalid_argument("Senha invalida.");
    }
}

void Senha::setSenha(string senha){
    validar(senha);

    /**
     * Se a senha for válida, seta a senha.
     *
    */
    this->senha = senha;
}

// ---------------------------------------------------------------------------------
// Validar da Classe Telefone
// ---------------------------------------------------------------------------------

void Telefone::validar(string telefone){
    regex formato("^\\+\\d{7,15}$");

    /**
     * Se o match não for correto, lança uma exceção.
    */
    if(!regex_match(telefone, formato)){
        throw invalid_argument("Telefone invalido.");
    }
}
void Telefone::setTelefone(string telefone){
    validar(telefone);

    /**
     * Se o telefone for válido, seta o telefone.
     *
    */
    this->telefone = telefone;
}
