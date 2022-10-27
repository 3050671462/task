#include <iostream>
#include <ctime>
using namespace std;

typedef struct Robot{
    int hp;
}Robot;

int main(){
    Robot robot1, robot2;
    robot1.hp = 200;
    robot2.hp = 200;
    int atk = 10;
    int burst = 40;
    srand(time(NULL));
    int turn = (rand()%(2 - 1 + 1)) + 1;
    int n = 1;

    do{
        printf("----------------------------------\n");
        printf("第%d回合",n);
        if(turn == 1){
            int a = rand()%100 + 1;
            if(a % 3 == 0){
                robot2.hp -= atk;
                turn = 2;
            }
            else if(a % 2 == 0){
                robot1.hp -= 0;
                turn = 2;
            }
            else{
                robot1.hp -= burst;
                turn = 1;
            }
        }
        else if(turn == 2){
            int a = rand()%100 + 1;
            if(a % 3 == 0){
                robot1.hp -= atk;
                turn = 1;
            }
            else if(a % 2 == 0){
                robot2.hp -= 0;
                turn = 1;
            }
            else{
                robot2.hp -= burst;
                turn = 2;
            }
        }
        printf("\nRobot1的血量为%d\nRobot2的血量为%d\n",robot1.hp,robot2.hp);
        n++;
    }while((robot1.hp > 0) && (robot2.hp > 0));
    printf("经历%d回合，战斗结束！\n",n);
    if(robot1.hp > 0){
        printf("Robot1胜利！");
    }
    else if(robot2.hp > 0){
        printf("Robot2胜利！");
    }
    return 0;
}