#include <iostream>
#include "replace_player.h"
#include "glibber.h"
#include "replace_player_kafa.h"


int main(int argc, char **argv) {

    std::string start_string("Drei Chinesen mit dem Kontrabass");

	std::string mittelteil("--- wird auf magische Weise zu ---");

	


   // ReplacePlayer player1('i','u');
   // ReplacePlayer player2('a','b');

	glibber machschon;


    std::string answer = machschon.Play(start_string);
    //answer = player2.Play(answer);
    ReplacePlayer_kafa player2("ss","hello");
    std::string answer = player2.Play(answer);


	std::cout << start_string << std::endl;

	std::cout << mittelteil << std::endl;
   	std::cout << answer << std::endl;



    return 0;
}
