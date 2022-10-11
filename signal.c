#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int con;

void holaMundo(int sigmaNumber){
    if(sigmaNumber = 10){
        printf('Es la senal 10\n');
    } else {
        printf('Es otra senal');
    }
}

void nomematas(int sig){
    printf('jajaja no me matas\n');
}

int main(){
    signalf(12, holaMundo);
    signalf(10, holaMundo);
    signalf(2, nomematas);
    int con = 1;
    while(1){
        printf('Estoy trabajando');
        sleep(1);
    }
    printf('Nunca llega');
    return 0;
}
