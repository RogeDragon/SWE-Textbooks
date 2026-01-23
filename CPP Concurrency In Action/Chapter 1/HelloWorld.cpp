
#include <iostream>
#include <thread>

void HelloWorld(){
    std::cout << "Hello World! Concurrency" << std::endl;
}

int main(){
    //Hello World
    std::cout << "Hello World!" << std::endl;

    //Hello World But Concurrent
    std::thread t(HelloWorld);
    t.join(); // this bit forces the main thread to wait for the child. Maybe done through a condition varaible

    return 0;
}

/*
My goal is to build a networking game. A way to do this is maybe through this

std::vector<Player*> players;
bool server_running = true;

void PlayerClient(){
    *Player playerobj; // probs best to default intialis
    players.push_back(playerobj);

    while (//player connected, IDK){
        playerobj->recordInputs();
        playerobj->update(&players);
        playerobj->sendinfo();
    }
} 

int main(){
    



    return 0;
}

*/