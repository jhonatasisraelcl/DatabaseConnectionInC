#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <mysql/mysql.h>

using namespace std;

int main(int){
  MYSQL conexao;
  mysql_init(&conexao);
  if ( mysql_real_connect(&conexao, "localhost", "guest", "guest", "teste", 0, NULL, 0) ){
    printf("\nConexao ao banco realizada com sucesso!\n");
  }else{
    printf("Falha de conexao\n");
    printf("Erro %d : %s\n", mysql_errno(&conexao), mysql_error(&conexao));
  }
  system("PAUSE");
  return(0);
}
