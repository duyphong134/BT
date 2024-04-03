
//B4
#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include <ctime>

#define START 0
#define GOOD_GUESS 1
#define BAD_GUESS 2

using namespace std;

//randomize word
const string WORD_LIST[] = {"dog", "cat", "human", "name", "scramble", "insane" ,"lost" , "horror", "man" , "woman" , "nigga"};
const int WORD_COUNT = sizeof(WORD_LIST) / sizeof(string);

const string& chooseWord(){
    int randomIndex = rand() % WORD_COUNT;
    return WORD_LIST[randomIndex];
}

//tao struct Hangman
struct Hangman{
    string secretWord; // từ cần đoán
    string guessedWord; // từ đã va dang doan
    int status = START;
    int badGuesses = 0;// số lần đã đoán

    // khởi tạo trò chơi
    void init(){
        status  = START;
        secretWord = chooseWord();
        guessedWord = string(secretWord.length(), '_');
        badGuesses = 0;
    }

    void update(char input){
        status  = BAD_GUESS;
        for(int i = 0; i < secretWord.length(); i++){
            if(input  == secretWord[i] &&  guessedWord[i] == '_')
            {
                status  = GOOD_GUESS;
                guessedWord[i] = input;
            }
        }
        if(status == BAD_GUESS){
            badGuesses ++;
        }
    }

    bool won() const{
        return(secretWord == guessedWord);
    }

    bool lost() const {
        return (badGuesses > secretWord.size());
    }
    bool isOver() const{
       return(lost() || won());
    }
};


void render(Hangman& game){
   if(game.status == GOOD_GUESS) cout << "Good guess!"  << endl;
   else if(game.status == BAD_GUESS) cout << "Bad guess!" << endl;

   cout << "Bad guesses: " << game.badGuesses << endl;
   cout << "Guessed word: " << game.guessedWord  << endl;
   switch(game.badGuesses){
        case 6:
            cout << " _________" << endl;
            cout << " |       |" << endl;
            cout << " |       O" << endl;
            cout << " |      /|\\ " << endl;
            cout << " |      / \\" << endl;
            cout << " |" << endl;
            cout << "_|_" << endl;
            break;
        case 5:
            cout << " _________" << endl;
            cout << " |       |" << endl;
            cout << " |       O" << endl;
            cout << " |      /|\\ " << endl;
            cout << " |      /" << endl;
            cout << " |" << endl;
            cout << "_|_" << endl;
            break;
        case 4:
            cout << " _________" << endl;
            cout << " |       |" << endl;
            cout << " |       O" << endl;
            cout << " |      /|\\ " << endl;
            cout << " |" << endl;
            cout << " |" << endl;
            cout << "_|_" << endl;
            break;
        case 3:
            cout << " _________" << endl;
            cout << " |       |" << endl;
            cout << " |       O" << endl;
            cout << " |      /|" << endl;
            cout << " |" << endl;
            cout << " |" << endl;
            cout << "_|_" << endl;
            break;
        case 2:
            cout << " _________" << endl;
            cout << " |       |" << endl;
            cout << " |       O" << endl;
            cout << " |       |" << endl;
            cout << " |" << endl;
            cout << " |" << endl;
            cout << "_|_" << endl;
            break;
        case 1:
            cout << " _________" << endl;
            cout << " |       |" << endl;
            cout << " |       O" << endl;
            cout << " |" << endl;
            cout << " |" << endl;
            cout << " |" << endl;
            cout << "_|_" << endl;
            break;
        default:
            cout << " _________" << endl;
            cout << " |       |" << endl;
            cout << " |" << endl;
            cout << " |" << endl;
            cout << " |" << endl;
            cout << " |" << endl;
            cout << "_|_" << endl;
            break;
    }

   if(game.won()) cout << "You won!";
   else if(game.lost()) cout << "You lost!";
}

char getInput(){
    string input;
    cout << "Make a guess: ";
    cin >> input;
    return input[0];
}


int main()
{
    srand(time(0));
    Hangman game;
    game.init();
    render(game);
    do{
        char input = getInput();
        game.update(input);
        render(game);
        cout << endl;
    }while (!game.isOver());

    return 0;
}


