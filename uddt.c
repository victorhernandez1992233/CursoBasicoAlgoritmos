#include "stblid.h"
#include "stdio.h"
#include "string.h"


struct client{
    char Name[50];
    char Id[10];
    float Credit;
    char Address[100];
}



main(int argc, char const *argv[]){
    
    struct client client1 = {0};
    strcpy(client1.Name, "camilo Valencia");
    strcpy(client1.Id, "0000000001");
    client1.Credit = 1000000;
    strcpy(client1.Address, "calle, carrera 1, ciudad bolivar")

    prinf("the client name is: %s", client1.Name);
    prinf("the client id is: %d", client1.Id);
    prinf("the client credit is: %s", client1.Credit);
    prinf("the client Adress is: %s", client1.Address)

    return 0;
}