#include <cstring>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
void greet()
{
    cout << "==========================================================\n";
    cout << "               Hangman: The Game\n";
    cout << "==========================================================\n\n";
    cout << "Instructions: Save your friend from being hanged by guessing the letters in the codeword.\n" << endl;

    cout << "==========================================================\n";
    cout << "               Rules of the game:" << endl;
    cout << "==========================================================\n\n";
    cout << "* You can decide to play solo or with a partner" << endl;
    cout << "* Solo: player will try and guess from the library already set that he generator will choose a random" << endl;
    cout << "* Duo: player will attempt to guess the word the opther player has choosen for them" << endl;
    cout << "* Player has 7 attempts in getting the name correct\n\n" << endl;

}

void display_misses(int misses) //The display of the hangman depending on the incorrect letters that were guessed
{
    if (misses == 0)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
    else if (misses == 1)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
    else if (misses == 2)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << "  |   | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
    else if (misses == 3)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << " /|   | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
    else if (misses == 4)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << " /|\\  | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
    else if (misses == 5)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << " /|\\  | \n";
        cout << " /    | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
    else if (misses == 6)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << " /|\\  | \n";
        cout << " / \\  | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }

}

void display_status(vector<char> incorrect, string answer)
{
    cout << "Incorrect Guesses: \n";

    for (int i = 0; i < incorrect.size(); i++)
    {
        cout << incorrect[i] << " ";
    }

    cout << "\nCodeword:\n";

    for (int i = 0; i < answer.length(); i++)
    {
        cout << answer[i] << " ";
    }
}




string backbone(string& answer1, string answer, string codeword, vector<char> incorrect, bool guess, int misses, int z, char x)
{
    char spacer = ' ';
    for (int i = 0; i < codeword.length(); i++)
    {

        if (codeword[i] == spacer)
        {
            answer[i] = spacer;
        }
    }
    char letter;

    while (answer != codeword && misses < 7)
    {

        display_misses(misses);
        display_status(incorrect, answer);

        cout << "\n\nPlease enter your guess: ";
        cin >> letter;

        for (int i = 0; i < codeword.length(); i++)
        {
            if (letter == codeword[i])
            {
                answer[i] = letter;
                guess = true;
            }

        }
        if (guess)
        {
            cout << "\nCorrect!\n";
        }
        else
        {
            cout << "\nIncorrect! Another portion of the person has been drawn.\n";
            incorrect.push_back(letter);
            misses++;
        }
        guess = false;
    }
    answer1 = answer;

    return answer1;


}
