#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
  char line[256];
  char username[256]; //establish size of buffer
  char password[256];

  printf("Username:");
  printf("\n");

  printf("Password:");
  printf("\n");

  if(fgets(line, sizeof(line), stdin)){
    if(sscanf(line,"%s", username)==1){
      //recieved user
    }
  }

  if(fgets(line, sizeof(line), stdin)){
    if(sscanf(line,"%s", password)==1){
      //recieved pass
    }
  }



  }

//shmat
//shmget
