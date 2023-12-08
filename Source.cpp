#include <string>
#include <vector>
#include <iostream>
#include <cstring>
#include "functions.h"
#include "header.h"
using namespace std;


//declare functions

void greet();
void display_misses(int misses);
void display_status(vector<char> incorrect, string answer);

string library(string& codeword, string characters);


int main()
{
    int n, z;
    greet();
    cout << "please enter number of players (1 or 2)" << endl;
    cin >> n;
    if (n == 1) {

        int misses = 0;
        vector<char> incorrect;
        bool guess = false;
        char  x = '_';
        string codeword, characters;

        cout << "You can choose from 10 different topics:  Music, Resturant, Place, Astronomy, Game, Sport, School, Celebrity, Major, & Jobs" << endl;
        cin >> characters;

        library(codeword, characters);

        z = 0;
        for (int i = 0; codeword[i]; i++)
        {
            z++;
        }
        string answer(z, x);
        
        string answer1;

        backbone(answer1, answer, codeword, incorrect, guess, misses, z, x);

        if (answer1 == codeword)
        {
            cout << "Hooray! You saved the person from being hanged and earned a medal of honor!\n";
            cout << "Congratulations!\n";
        }
        else
        {
            cout << "On no! The man is hanged!\n";
        }
        cout << "the word was:" << codeword << endl;
    }
    else
    {
        string codeword;

        cout << "player 1 close your eyes while player 2 enters the codeword:";
        cin >> codeword;
        for (int o = 0; o < 100; o++)
        {
            cout << "\n";
        }
        int misses = 0;
        vector<char> incorrect;
        bool guess = false;
        char  x = '_';



        z = 0;
        for (int i = 0; codeword[i]; i++)
        {
            z++;
        }
        string answer(z, x);
        
        string answer1;

        backbone(answer1, answer, codeword, incorrect, guess, misses, z, x);
        if (answer1 == codeword)
        {
            cout << "Hooray! You saved the person from being hanged and earned a medal of honor!\n";
            cout << "Congratulations!\n";
        }
        else
        {
            cout << "On no! The man is hanged!\n";
            
        }
        cout << "the word was:" << codeword << endl;
    }
    
    cout << "\n\n==========================================================\n";
    cout << "               GAME OVER \n";
    cout << "==========================================================\n";
    return 0;
}