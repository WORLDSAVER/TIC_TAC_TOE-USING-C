#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char game_arr[10] = {'0','1', '2', '3', '4', '5', '6', '7', '8', '9'};
int number_of_moves = 0;
bool not_win = true;

void show_board(void);
void input_fxn();
void game_logic();


int main()
{


    printf("\t\t\t\t\t|||WELCOME TO TIC TAC TOE BY HRIDYANSH PAREEK|||\n");
    printf("\n\t\t\t\t\t\tPlayer-1(X) vs Player-2(O)\n");
    show_board();
    while(not_win)
    {
        input_fxn();
        game_logic();
    }


    return 0;

}

void show_board(void)
{

   printf("\n\t\t\t\t\t\t\t %c | %c | %c\n", game_arr[1], game_arr[2], game_arr[3]);
   printf("\n\t\t\t\t\t\t\t %c | %c | %c\n", game_arr[4], game_arr[5], game_arr[6]);
   printf("\n\t\t\t\t\t\t\t %c | %c | %c\n", game_arr[7], game_arr[8], game_arr[9]);

}
void input_fxn()
{   number_of_moves+=1;
    int position;
    top:printf("ENTER YOUR POSITION<->");
    scanf("%d", &position);

    if(position<1||position>9)
    {
        printf("PLEASE ENTER THE CORRECT PLACEHOLDERS(1 TO 9)");
        goto top;
    }

    else
    {
        if(game_arr[position]=='X'||game_arr[position]=='O')
        {
            printf("SOMEONE'S ALREADY THERE! ENTER ANOTHER POSITION");
            goto top;
        }

        else if(number_of_moves%2!=0)
        {
            game_arr[position]='X';
        }
        else
        {
            game_arr[position]='O';
        }
    }
    system("cls");
    printf("\t\t\t\t\t|||WELCOME TO TIC TAC TOE BY HRIDYANSH PAREEK|||\n");
    printf("\n\t\t\t\t\t\tPlayer-1(X) vs Player-2(O)\n");
    show_board();


}

void game_logic()
{
    if(game_arr[1]=='X'&&game_arr[2]=='X'&&game_arr[3]=='X')
    {
        not_win=false;
        printf("WOOHOO! PLAYER ONE WINS!!!!!!!!!!");
    }

    else if(game_arr[4]=='X'&&game_arr[5]=='X'&&game_arr[6]=='X')
    {
        not_win=false;
        printf("WOOHOO! PLAYER ONE WINS!!!!!!!!!!");
    }

     else if(game_arr[7]=='X'&&game_arr[8]=='X'&&game_arr[9]=='X')
    {
        not_win=false;
        printf("WOOHOO! PLAYER ONE WINS!!!!!!!!!!");
    }

     else if(game_arr[1]=='X'&&game_arr[4]=='X'&&game_arr[7]=='X')
    {
        not_win=false;
        printf("WOOHOO! PLAYER ONE WINS!!!!!!!!!!");
    }

     else if(game_arr[2]=='X'&&game_arr[5]=='X'&&game_arr[8]=='X')
    {
        not_win=false;
        printf("WOOHOO! PLAYER ONE WINS!!!!!!!!!!");
    }

     else if(game_arr[3]=='X'&&game_arr[6]=='X'&&game_arr[9]=='X')
    {
        not_win=false;
        printf("WOOHOO! PLAYER ONE WINS!!!!!!!!!!");
    }

     else if(game_arr[1]=='X'&&game_arr[5]=='X'&&game_arr[9]=='X')
    {
        not_win=false;
        printf("WOOHOO! PLAYER ONE WINS!!!!!!!!!!");
    }

     else if(game_arr[3]=='X'&&game_arr[5]=='X'&&game_arr[7]=='X')
    {
        not_win=false;
        printf("WOOHOO! PLAYER ONE WINS!!!!!!!!!!");
    }


    else if(game_arr[1]=='O'&&game_arr[2]=='O'&&game_arr[3]=='O')
    {
        not_win=false;
        printf("WOOHOO! PLAYER TWO WINS!!!!!!!!!!");
    }

    else if(game_arr[4]=='O'&&game_arr[5]=='O'&&game_arr[6]=='O')
    {
        not_win=false;
        printf("WOOHOO! PLAYER TWO WINS!!!!!!!!!!");
    }

     else if(game_arr[7]=='O'&&game_arr[8]=='O'&&game_arr[9]=='O')
    {
        not_win=false;
        printf("WOOHOO! PLAYER TWO WINS!!!!!!!!!!");
    }

     else if(game_arr[1]=='O'&&game_arr[4]=='O'&&game_arr[7]=='O')
    {
        not_win=false;
        printf("WOOHOO! PLAYER TWO WINS!!!!!!!!!!");
    }

     else if(game_arr[2]=='O'&&game_arr[5]=='O'&&game_arr[8]=='O')
    {
        not_win=false;
        printf("WOOHOO! PLAYER TWO WINS!!!!!!!!!!");
    }

     else if(game_arr[3]=='O'&&game_arr[6]=='O'&&game_arr[9]=='O')
    {
        not_win=false;
        printf("WOOHOO! PLAYER TWO WINS!!!!!!!!!!");
    }

     else if(game_arr[1]=='O'&&game_arr[5]=='O'&&game_arr[9]=='O')
    {
        not_win=false;
        printf("WOOHOO! PLAYER TWO WINS!!!!!!!!!!");
    }

     else if(game_arr[3]=='O'&&game_arr[5]=='O'&&game_arr[7]=='O')
    {
        not_win=false;
        printf("WOOHOO! PLAYER TWO WINS!!!!!!!!!!");
    }

    else if(game_arr[1]!='1'&&game_arr[2]!='2'&&game_arr[3]!='3'&&game_arr[4]!='4'&&game_arr[5]!='5'&&game_arr[6]!='6'&&game_arr[7]!='7'&&game_arr[8]!='8'&&game_arr[9]!='9')
    {
        not_win = false;
        printf("IT'S A DRAW!!");
    }

    else{
        not_win = true;
    }

    if(number_of_moves==9&&not_win==true)
    {
        not_win=false;
        printf("IT'S A DRAW!");
    }
}

