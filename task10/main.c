#include <stdio.h>

void ping();
void pong();
void handshake();

int main(void){
  
  const int NODE_ID = 12; 
  int packet_size = NODE_ID * 4;
  int total_transfer = packet_size * 3;
  
  handshake();
  printf(":%d\n", packet_size);

  handshake();
  printf(":%d\n", total_transfer);
  
  printf("SESSION:CLOSED");

  return 0; 
}

void ping(){
  printf("PING");
}

void pong(){
  printf("PONG");
}

void handshake(){

  ping();
  printf("-");
  pong();
  ping();
}
