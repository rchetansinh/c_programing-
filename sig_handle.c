#include<signal.h>
#include<stdio.h>
#include<unistd.h>
void func (int sig){
printf("func -I got signale %d",sig);
signal(SIGINT,SIG_DFL);
}
int main(){
(void) signal(SIGINT ,func);
while(1){
printf("Hello\n");
sleep (1);
}
}

