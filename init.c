#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
  int status;
  int arr[10];

  for(i=0;i<6;i++){
    arr[i]=fork();
    if (arr[i]==0){
      execlp("xterm -e ./getty","getty",NULL)
    }
  }
    wait(&status); //shutdowm

  }

//shmat
//shmget
