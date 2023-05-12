#ifndef TESTES_ENTIDADES_H
#define TESTES_ENTIDADES_H

#include "entidades.h"

#include <stdexcept>
using namespace std;

// --------------------------------------------------------------------------
// TUTeste - Teste de unidade da entidade Teste
// --------------------------------------------------------------------------
class TUTeste{
    private:
        const string CODIGO_VALIDO = "ABC123"; // Código válido
        const string CLASSE_VALIDA = "UNIDADE"; // Classe válida
        const string NOME_VALIDO = "TESTE"; // Nome válido

        const string CODIGO_INVALIDO = "123ABC"; // Código inválido
        const string CLASSE_INVALIDA = "CABEÇA"; // Classe inválida
        const string NOME_INVALIDO = "TESTE123"; // Nome inválido

        Teste *teste; // Ponteiro para objeto da classe Teste (entidade a ser testada)

        int estado; // Estado do teste (SUCESSO ou FALHA)

        void setUp(); // Inicializa o teste
        void tearDown(); // limpa as configurações do teste
        void testarCenario(); // Testa o cenário de sucesso

    public:
        static const int SUCESSO =  0; // Código de sucesso
        static const int FALHA   = -1; // Código de falha

        int run(); // Executa o teste
};

// --------------------------------------------------------------------------
// TUCasoTeste - Teste de unidade da entidade Desenvolvedor
// --------------------------------------------------------------------------
class TUCasoTeste{
    private:
        const string CODIGO_VALIDO = "ABC123"; // Código válido
        const string NOME_VALIDO = "TESTE"; // Nome válido
        const string DATA_VALIDA = "29/02/2020"; // Data válida
        const string ACAO_VALIDA = "Texto valido."; // Ação válida
        const string RESPOSTA_VALIDA = "Texto valido."; // Resposta válida
        const string RESULTADO_VALIDO = "APROVADO"; // Resultado válido

        CasoTeste *casoTeste; // Ponteiro para objeto da classe CasoTeste (entidade a ser testada)

        int estado; // Estado do teste (SUCESSO ou FALHA)

        void setUp(); // Inicializa o teste
        void tearDown(); // limpa as configurações do teste
        void testarCenario(); // Testa o cenário de sucesso


    public:
        static const int SUCESSO =  0; // Código de sucesso
        static const int FALHA   = -1; // Código de falha

        int run(); // Executa o teste
};

// --------------------------------------------------------------------------
// TUDesenvolvedor - Teste de unidade da entidade Desenvolvedor
// --------------------------------------------------------------------------
class TUDesenvolvedor{
    private:
        const string MATRICULA_VALIDA = "12345-7"; // Matrícula válida
        const string NOME_VALIDO = "DESENVOLVEDOR"; // Nome válido
        const string SENHA_VALIDA = "Ab1@cD";
        const string TELEFONE_VALIDO = "+5512345678"; // Telefone válido

        const string MATRICULA_INVALIDA = "259876-2"; // Matrícula inválida
        const string NOME_INVALIDO = "DESENVOLVEDOR123"; // Nome inválido
        const string SENHA_INVALIDA = "Ab1@cDddd"; // Senha inválida
        const string TELEFONE_INVALIDO = "+12345678901234567890"; // Telefone inválido

        Desenvolvedor *desenvolvedor; // Ponteiro para objeto da classe Desenvolvedor (entidade a ser testada)

        int estado; // Estado do teste (SUCESSO ou FALHA)

        void setUp(); // Inicializa o teste
        void tearDown(); // limpa as configurações do teste
        void testarCenario(); // Testa o cenário de sucesso

    public:
        static const int SUCESSO = 0; // Código de sucesso
        static const int FALHA   = -1; // Código de falha

        int run(); // Executa o teste
};
#endif
