#include "Zombie.hpp"

using std::cout;
using std::endl;
using std::string;

void    Zombie::announce(void){

    string f = "FOO";
    if (m_nom == f)
        cout << m_nom << ": BraiiiiiiinnnzzzZ...";
    else
        cout << "<" << m_nom << ">:" << " BraiiiiiiinnnzzzZ...";
}

Zombie::Zombie(){
    cout << "Zombie create" << endl;
}

Zombie::~Zombie(){
    cout << "Zombie kill" << endl;
}

Zombie *Zombie::zombieHorde(int n, std::string name)
{
    Zombie *newbie = new Zombie [n];
    for (int i = 0; i < n; i++)
    {
        newbie[i].announce();
    }
    return (newbie);
}