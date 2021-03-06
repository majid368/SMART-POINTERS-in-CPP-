#include <iostream>
#include <string>

using namespace std;

class Player {
public:
    // attributes
    string name;
    int health;
    int xp;

    // methods
    void talk(string text_to_say) { cout << name << " says " << text_to_say << endl;  }
    bool is_dead();
};

int main() {
    Player Majid;
    Majid.name = "Majid";
    Majid.health = 100;
    Majid.xp = 12;
    Majid.talk("Majid is here");

    Player *enemy = new Player ;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy->xp = 15;
    
    enemy->talk("I will destroy you!");

    delete enemy;

    return 0;
}