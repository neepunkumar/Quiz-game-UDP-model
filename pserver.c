 
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<unistd.h>
#include<netdb.h>
#include<stdio.h>
#include<string.h>
#include<arpa/inet.h>
#define MAXLINE 1024
void reverse(char *,int,int);
int main(int argc,char **argv)
{
printf("\nB Neepun Kumar\n Regd No.-1841012439\n CSE E\n");
int sockfd;
int n;
socklen_t len;
char msg[1020];
int msg1[1020];
struct sockaddr_in servaddr,cliaddr;
sockfd=socket(AF_INET,SOCK_DGRAM,0);


servaddr.sin_family=AF_INET;
servaddr.sin_addr.s_addr=INADDR_ANY;
servaddr.sin_port=htons(5035);

bind(sockfd,(struct sockaddr*)&servaddr,sizeof(servaddr));
printf("\n\n Binded");
printf("\n\n Listening...");

printf("\n ");
len=sizeof(cliaddr);
int k=0;
int sum =0;
int j=0;


 n=recvfrom(sockfd,msg,MAXLINE,0,(struct sockaddr*)&cliaddr,&len);
 int length = strlen(msg);
while(j<length)
{
   
  //printf("%c",msg[j]);
  if(msg[j++] =='d'){
     sum = sum+1;
  }
  if(msg[j++] =='a'){
     sum = sum+1;
  }
  if(msg[j++] =='c'){
     sum = sum+1;
  }
  if(msg[j++] =='a'){
     sum = sum+1;
  }
  if(msg[j++] =='b'){
     sum = sum+1;
  }
}  

int i=0;
for(i =0;i<1;i++)
{
  msg1[i]= sum;
//printf("%d",msg1[i]);
sendto(sockfd,msg1,n,0,(struct sockaddr*)&cliaddr,len);
}

printf("Marks scored is  : %d\n",sum);
return 0;
}
