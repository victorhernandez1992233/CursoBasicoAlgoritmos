
#include <stdio.h>
#define SIZE 5

int values[SIZE], front = -1 , rear = -1;


void enQueue(int value){
	if (rear == SIZE - 1)
		printf("Nuestro queue esta lleno\n");
	else{
	if (front == -1 )
		front = 0;
		rear++;
		values[rear] = value;
		printf("se agrego %d correctamente", value);
	}
}


void deQueue  (){
	if (front == -1)
		printf("Nuestro queue esta vacio\n");
	else{
		printf("se elimino el valor %d", values [front]);
		front++; 
		if (front > rear)
			front = rear =  -1;
	
		}
}


main(int argc, char const *argv[])
{


	enQueue(10);

	return 0;
}

