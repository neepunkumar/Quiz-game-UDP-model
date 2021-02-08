// Client C code to reverse a string by sent from client 
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<string.h>
#include<arpa/inet.h>
#include<string.h>
#include<arpa/inet.h>
#include<stdio.h>
#define MAXLINE 1024
int main(int argc,char* argv[])
{
printf("\nB Neepun Kumar\n Regd No.-1841012439\n CSE B\n");
printf("\nSujal Agrawal\n Regd No.- 1841012421\n CSE B\n");
printf("\nRahul Kumar Singh\n Regd No.-1841012444\n CSE B\n");
printf("\nAbhipsa Mohanty\n Regd No.-1841012433\n CSE B\n");
int sockfd;
int n;

socklen_t len;int i=0;
char a[1020],c; int recvline[1020];
struct sockaddr_in servaddr;
//strcpy(sendline,"");
printf("What is the capital of India");
printf("\na)Mumbai");
printf("\nb)Kolkata");
printf("\nc)Chennai");
printf("\nd)New Delhi");
printf("\n");
scanf("%c",&a[i++]);
c = getchar();




while(i<5)
{




printf("\nWhat is the capital of Odisha");
printf("\na)Bhubaneswar");
printf("\nb)Chandigarh");
printf("\nc)Ranchi");
printf("\nd)Allahabad");
printf("\n");
scanf("%c",&a[i++]);
c = getchar();




printf("\nWho is the President of India");
printf("\na)Narendra Modi");
printf("\nb)Amit Shah");
printf("\nc)Ramnath Govind");
printf("\nd)Yogi Adityanath");
printf("\n");
scanf("%c",&a[i++]);
c = getchar();



printf("\nWho invented the tha famous mass-energy equation E=mc^2");
printf("\na)Albert Einstein");
printf("\nb)Newton");
printf("\nc)Nicolas Tesla");
printf("\nd)Michael Faraday");
printf("\n");
scanf("%c",&a[i++]);
c = getchar();



printf("\nWhat instrument is used to measure tempreature");
printf("\na)Sethoscope");
printf("\nb)Thermometer");
printf("\nc)Horoscope");
printf("\nd)Lithoscope");
printf("\n");
scanf("%c",&a[i++]);
c = getchar();

}

sockfd=socket(AF_INET,SOCK_DGRAM,0);
//bzero(&servaddr,sizeof(servaddr));

servaddr.sin_family=AF_INET;
servaddr.sin_addr.s_addr=inet_addr("127.0.0.1");
servaddr.sin_port=htons(5035);

connect(sockfd,(struct sockaddr*)&servaddr,sizeof(servaddr));
len=sizeof(servaddr);
sendto(sockfd,a,MAXLINE,0,(struct sockaddr*)&servaddr,len);


n=recvfrom(sockfd,recvline,MAXLINE,0,NULL,NULL);
//recvline[n]=0;
for(int d=0;d<1;d++){
printf("\n marks scored is : %d\n\n",recvline[d]);
}
return 0;
}
