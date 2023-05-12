#ifndef ENTIDADES_H
#define ENTIDADES_H

#include "dominios.h"

using namespace std;

// ---------------------------------------------------------------------------------
// Entidade Teste
// ---------------------------------------------------------------------------------

/**
 * @brief Entidade Teste que armazena um código, uma classe e um nome.
 * 
 * @details
 * A entidade Teste armazena um código, uma classe e um nome.
*/

class Teste{
    private:
    /**
     * @brief Código do teste.
     * 
     * @details
     * Atributo que armazena o código do teste.
    */
        Codigo codigo;
        Classe classe;
        Texto nome;
    
    public:
    /**
     * @brief Seta o código.
     * 
     * @details
     * Seta o código e chama o método validar.
     * 
     * @param Codigo a ser setado.
    */
        void setCodigo(const Codigo &codigo); // Seta o código
        void setClasse(const Classe &classe); // Seta a classe
        void setNome(const Texto &nome); // Seta o nome

        Codigo getCodigo() const; // Retorna o código
        Classe getClasse() const; // Retorna a classe
        Texto getNome() const; // Retorna o nome
};

/**
 * @brief Retorna o código.
 * 
 * @return Codigo.
*/
inline void Teste::setCodigo(const Codigo &codigo){
    this->codigo = codigo;
}

inline void Teste::setClasse(const Classe &classe){
    this->classe = classe;
}

inline void Teste::setNome(const Texto &nome){
    this->nome = nome;
}

inline Codigo Teste::getCodigo() const{
    return codigo;
}

inline Classe Teste::getClasse() const{
    return classe;
}

inline Texto Teste::getNome() const{
    return nome;
}

// ---------------------------------------------------------------------------------
// Entidade Desenvolvedor
// ---------------------------------------------------------------------------------

class Desenvolvedor{
    /**
     * @brief Entidade Desenvolvedor que armazena uma matrícula, um nome, uma senha e um telefone.
     * 
     * @details
     * A entidade Desenvolvedor armazena uma matrícula, um nome, uma senha e um telefone.
    */
    private:
    /**
     * @brief Matrícula do desenvolvedor.
     * 
     * @details
     * Atributo que armazena a matrícula do desenvolvedor.
     * 
     * @see Matricula
    */
        Matricula matricula;
        Texto nome;
        Senha senha;
        Telefone telefone;

    public:
    /**
     * @brief Seta a matrícula.
     * 
     * @details
     * Seta a matrícula e chama o método validar.
     * 
     * @param Matricula a ser setada.
    */
        void setMatricula(const Matricula &matricula);
        void setNome(const Texto &nome);
        void setSenha(const Senha &senha);
        void setTelefone(const Telefone &telefone);

        Matricula getMatricula() const;
        Texto getNome() const;
        Senha getSenha() const;
        Telefone getTelefone() const;
};
/**
 * @brief Retorna a matrícula.
*/

inline void Desenvolvedor::setMatricula(const Matricula &matricula){
    this->matricula = matricula;
}

inline void Desenvolvedor::setNome(const Texto &nome){
    this->nome = nome;
}

inline void Desenvolvedor::setSenha(const Senha &senha){
    this->senha = senha;
}

inline void Desenvolvedor::setTelefone(const Telefone &telefone){
    this->telefone = telefone;
}

inline Matricula Desenvolvedor::getMatricula() const{
    return matricula;
}

inline Texto Desenvolvedor::getNome() const{
    return nome;
}

inline Senha Desenvolvedor::getSenha() const{
    return senha;
}

inline Telefone Desenvolvedor::getTelefone() const{
    return telefone;
};

// ---------------------------------------------------------------------------------
// Entidade Caso de Teste
// ---------------------------------------------------------------------------------

class CasoTeste{
    private:
        Codigo codigo;
        Texto nome;
        Data data;
        Texto acao;
        Texto resposta;
        Resultado resultado;

    public:
        void setCodigo(const Codigo &codigo);
        void setNome(const Texto &nome);
        void setData(const Data &data);
        void setAcao(const Texto &acao);
        void setResposta(const Texto &resposta);
        void setResultado(const Resultado &resultado);

        Codigo getCodigo() const;
        Texto getNome() const;
        Data getData() const;
        Texto getAcao() const;
        Texto getResposta() const;
        Resultado getResultado() const;
};

inline void CasoTeste::setCodigo(const Codigo &codigo){
    this->codigo = codigo;
}

inline void CasoTeste::setNome(const Texto &nome){
    this->nome = nome;
}

inline void CasoTeste::setData(const Data &data){
    this->data = data;
}

inline void CasoTeste::setAcao(const Texto &acao){
    this->acao = acao;
}

inline void CasoTeste::setResposta(const Texto &resposta){
    this->resposta = resposta;
}

inline void CasoTeste::setResultado(const Resultado &resultado){
    this->resultado = resultado;
}

inline Codigo CasoTeste::getCodigo() const{
    return codigo;
}

inline Texto CasoTeste::getNome() const{
    return nome;
}

inline Data CasoTeste::getData() const{
    return data;
}

inline Texto CasoTeste::getAcao() const{
    return acao;
}

inline Texto CasoTeste::getResposta() const{
    return resposta;
}

inline Resultado CasoTeste::getResultado() const{
    return resultado;
}


#endif