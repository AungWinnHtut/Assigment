#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//
int isBone_Gold();
void moveLeft();
void moveUp();
void moveRight();
void moveDown();
void isSomething();
//Global variable
int x,y;
//int life=3;
int array[10][10];

int main(){

	//while(life>0){


	//Create WrokSpace
	
	int i;
	int j;
	for(i=0 ; i<10; i++	){
		for(j=0; j<10; j++){
			array[i][j]=0;
			printf("Array [%d][%d] - %d \n",i,j,array[i][j]);
		}
	}

	//Load player position
	srand(time(NULL));
	x=rand() % 11;
	sleep(1);
	y=rand() % 11;

	printf("x - %d and y - %d",x,y);


	//Fill Item (Bone,Gold,Door)
	int no_bone=6;
	int xb;
	int yb;
		while(no_bone>0){
			srand(time(NULL));
			//between 0 and 10
			xb=rand() % 11;

			//Sleep is used to split local-time interval
			sleep(1);

			srand(time(NULL));
			yb=rand() % 11;

			//Generate Random Variable();
			array[xb][yb]=isBone_Gold();

			printf("Boned Array [%d][%d] - %d \n",xb,yb,array[xb][yb]);

			no_bone=no_bone-1;
		}

	//Get input
	printf("The Game is started\n");
   	printf("To Move Use - a,w,s,d \n");
   	char args=0;
    	
	
 		 
	while(args!=EOF){
		printf("Enter an integer: \n");
 		scanf(" %c", &args);
		switch(args){
    		case 'a': case 'A':
    			moveLeft();
    			printf("Position x - %d and y - %d \n",x,y);
    			if(x!=-1)
				isSomething();
    			break;
    		case 'w': case 'W':
    			moveUp();
    			printf("Position x - %d and y - %d \n",x,y);
    			if(y!=-1)
    			isSomething();
    			break;
    		case 'd': case 'D':
    			moveRight();
    			printf("Position x - %d and y - %d \n",x,y);
    			if(x!=-1)
    			isSomething();
    			break;
    		case 's': case 'S':
    			moveDown();
    			printf("Position x - %d and y - %d \n",x,y);
    			if(x!=-1)
    			isSomething();
    			break;
    		default : printf("--%d\n",x);
    	}
	}

//}//end of life
	return 0;
}
//end of main

//A
void moveLeft(){
	if(x<0){
		x=10;
	}
	else if(x>10){
		x=0;
	}else{
		x=x-1;
	}
}

//W
void moveUp(){
	if(y<0){
		y=10;
	}
	else if(y>10){
		y=0;
	}else{
		y=y+1;
	}
}


//D
void moveRight(){
	if(x<0){
		x=10;
	}
	else if(x>10){
		x=0;
	}else{
		x=x+1;
	}
}

//S
void moveDown(){
	if(y<0){
		y=10;
	}
	else if(y>10){
		y=0;
	}else{
		y=y-1;
	}
}


int isBone_Gold(){
	int ans;
	srand(time(NULL));
	ans=rand() % 2;
	return ans+1;

}

void isSomething(){
	if(array[x][y]==1){
		printf("You is under bome\n");
		array[x][y]==0;
	//	life=life-1;
	}
	else if(array[x][y]==2){
		printf("You get new Coin\n");
		array[x][y]=0;
	}else{
		printf("Keep Going");
	}	
}