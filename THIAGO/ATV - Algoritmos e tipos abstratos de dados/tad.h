typedef struct Cidade cidade;
typedef struct Linha linha;


linha* criaLinha(char itinerario[][20], char descricao[][100], int nCidades);
void exibeCidade(cidade cid);