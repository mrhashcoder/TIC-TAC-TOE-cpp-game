

#include <iostream>
#include<cstdio>

using namespace std;

char sq[10]={'o','1','2','3','4','5','6','7','8','9'};

int gamespace();
int checkgame();

int main()
{	printf("\nDeveloped By : Abhishek Sharma \n\n");
    char mark;
    int player=1,i,choice;

    do{
        gamespace();  
        cout<<"\n";

        player=player%2?1:2;
        printf("Player %d, enter your move :-  ",player); 
        cin>>choice;  

        mark = (player%2)?'X':'O';
        char ch=choice+48;

        if(choice<=9&&choice>=1&&sq[choice]==ch) 
			sq[choice]=mark;
        else{
            cout<<"Invalid Mode, Press any key to continue ";

            getchar(); 
            getchar(); 

            player--;   
        }

        i=checkgame(); 
        
        player++; 

    }while(i==-1);

    gamespace(); 

    if(i==1) printf("==>\a Player %d wins\n",--player); 

    else printf("==> Game Draws\n"); 

}



 int checkgame(){
    
    for(int i=1;i<=9;i=i+3){
      if(sq[i]==sq[i+1]&&sq[i+1]==sq[i+2]) return 1;
    }


    
    for(int i=1;i<=3;i=i+1){
      if(sq[i]==sq[i+3]&&sq[i+3]==sq[i+6]) return 1;
    }


    if(sq[1]==sq[5]&&sq[5]==sq[9]) return 1;
    if(sq[3]==sq[5]&&sq[5]==sq[7]) return 1;


   
    for(int i=1;i<=9;i++){
        char c=i+48;
        if(sq[i]==c) return -1;
    }


   
    return 0;

 }



int gamespace(){

    printf("\n\t\t ___________________________________\n"); 

    cout<<"\t\t|                                   |\n"; 

    cout<<"\t\t|\t   "<<"Tic Tac Toe              |\n"; 
    
    cout<<"\t\t|                                   |\n"; 

    cout<<"\t\t|   Player 1 (X)  -  Player 2 (O)   |\n\t\t|                                   |\n";  

    printf("\t\t|\t _________________          |\n"); 

   

    cout<<"\t\t|\t|     |     |     |         |\n"; 

    cout<<"\t\t|\t|  "<<sq[1]<<"  |  "<<sq[2]<<"  |  "<<sq[3]<<"  |         |\n";

    printf("\t\t|\t|_____|_____|_____|         |\n");

    cout<<"\t\t|\t|     |     |     |         |\n";

    cout<<"\t\t|\t|  "<<sq[4]<<"  |  "<<sq[5]<<"  |  "<<sq[6]<<"  |         |\n";

    printf("\t\t|\t|_____|_____|_____|         |\n");

    cout<<"\t\t|\t|     |     |     |         |\n";

    cout<<"\t\t|\t|  "<<sq[7]<<"  |  "<<sq[8]<<"  |  "<<sq[9]<<"  |         |\n";

    printf("\t\t|\t|_____|_____|_____|         |\n");  


   
    cout<<"\t\t|                                   |\n";  

    printf("\t\t|___________________________________|\n"); 
	
	
}
