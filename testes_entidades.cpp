#include "testes_entidades.h"
#include "dominios.h"

#include <stdexcept>

// ---------------------------------------------------------------------------------
// TUTeste
// ---------------------------------------------------------------------------------

void TUTeste::setUp(){
    /**
     * @brief Cria um objeto da classe Teste para ser testado
     *
     * @return void
    */
    teste = new Teste();
    estado = SUCESSO;
}

void TUTeste::tearDown(){
    delete teste;
}

void TUTeste::testarCenario(){
    Codigo codigo;
    Classe classe;
    Texto nome;

    try{
        codigo.setCodigo(CODIGO_VALIDO);
        classe.setClasse(CLASSE_VALIDA);
        nome.setTexto(NOME_VALIDO);

        teste->setCodigo(codigo);
        teste->setClasse(classe);
        teste->setNome(nome);

        if ((teste->getCodigo().getCodigo() != CODIGO_VALIDO) ||
           (teste->getClasse().getClasse() != CLASSE_VALIDA) ||
           (teste->getNome().getTexto() != NOME_VALIDO))
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
        return;
    }
}

int TUTeste::run(){
    setUp();
    testarCenario();
    tearDown();

    return estado;
}

// ---------------------------------------------------------------------------------
// TUDesenvolvedor
// ---------------------------------------------------------------------------------

void TUDesenvolvedor::setUp(){
    /**
     * @brief Cria um objeto da classe Desenvolvedor para ser testado
     *
     * @return void
    */
    desenvolvedor = new Desenvolvedor();    // Cria um objeto da classe Desenvolvedor para ser testado
    estado = SUCESSO;
}

void TUDesenvolvedor::tearDown(){
    /**
     * @brief Deleta o objeto da classe Desenvolvedor criado para ser testado
     *
     * @return void
    */
    delete desenvolvedor;
}

void TUDesenvolvedor::testarCenario(){

    Matricula matricula;
    Texto nome;
    Senha senha;
    Telefone telefone;

    try{
        matricula.setMatricula(MATRICULA_VALIDA);
        nome.setTexto(NOME_VALIDO);
        senha.setSenha(SENHA_VALIDA);
        telefone.setTelefone(TELEFONE_VALIDO);

        desenvolvedor-> setMatricula(matricula);
        desenvolvedor-> setNome(nome);
        desenvolvedor-> setSenha(senha);
        desenvolvedor-> setTelefone(telefone);

        if ((desenvolvedor->getMatricula().getMatricula() != MATRICULA_VALIDA) ||
           (desenvolvedor->getNome().getTexto() != NOME_VALIDO) ||
           (desenvolvedor->getSenha().getSenha() != SENHA_VALIDA) ||
           (desenvolvedor->getTelefone().getTelefone() != TELEFONE_VALIDO))
           estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
        return;
    }
}

int TUDesenvolvedor::run(){
    setUp();
    testarCenario();
    tearDown();

    return estado;
}

//--------------------------------------------------------------------------------------------------
// TUCasoTeste
// --------------------------------------------------------------------------------------------------

void TUCasoTeste::setUp(){
    casoTeste = new CasoTeste();
    estado = SUCESSO;
}

void TUCasoTeste::tearDown(){
    delete casoTeste;
}

void TUCasoTeste::testarCenario(){
    Codigo codigo;
    Texto nome;
    Data data;
    Texto acao;
    Resultado resultado;

    try{
        codigo.setCodigo(CODIGO_VALIDO);
        nome.setTexto(NOME_VALIDO);
        data.setData(DATA_VALIDA);
        resultado.setResultado(RESULTADO_VALIDO);

        casoTeste-> setCodigo(codigo);
        casoTeste-> setNome(nome);
        casoTeste-> setData(data);
        casoTeste-> setAcao(acao);
        casoTeste-> setResultado(resultado);

        if ((casoTeste->getCodigo().getCodigo() != CODIGO_VALIDO) ||
           (casoTeste->getNome().getTexto() != NOME_VALIDO) ||
           (casoTeste->getData().getData() != DATA_VALIDA) ||
           (casoTeste->getAcao().getTexto() != ACAO_VALIDA) ||
           (casoTeste->getResultado().getResultado() != RESULTADO_VALIDO))
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
        return;
    }
}

int TUCasoTeste::run(){
    setUp();
    testarCenario();
    tearDown();

    return estado;
}
