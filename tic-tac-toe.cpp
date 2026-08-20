#include <iostream>
#include <string>

int main(){
    int user1, user2, col,row;
    std::string win, board[3][3], currentplayer;;
    bool exit = false;

    for(int i {0}; i<10; ++i){
        std::cout<<"Hellow"<<std::endl;
        
        if(i%2==0){
            currentplayer = "O";
            std::cout<<"User1 = ";
            std::cin>>col>>row;
        }

        else {
            currentplayer = "X";
            std::cout<<"User2 = ";
            std::cin>>col>>row;
        }
        
        board[col][row] = currentplayer;    
        if(i>5){
            for(int a {0}; a>3; ++a){
                if(board[a][0]==board[a][1] and board[a][1]== board[a][2]){
                    win = board[a][0];
                    exit = true;
                    break;
                }
            if(exit == true) {
                break;
            }
                
            }
            if((board[0][0]==board[1][1] and board[1][1]== board[2][2]) or (board[0][2]==board[1][1] and board[1][1]== board[2][0])){
                win = board[1][1];
                break;
            }
        
        }
    }
    
    if(win == "O"){
        std::cout<<"User1 (O) wins"<<std::endl;
    }else if(win == "X"){
        std::cout<<"User2 (X) wins"<<std::endl;
    }else{
        std::cout<<"Match Draw"<<std::endl;
    }

    return 0;
}