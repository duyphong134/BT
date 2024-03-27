#include <array>
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

//B1
bool check(char **a, int m, int n)
{
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] != 'X'){
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int m, n, k;
    cin >> m >> n >> k;
    char **a = new char *[m];
    srand(time(nullptr));
    for(int i = 0; i < m; i++){
        a[i] = new char[n];
        for(int j = 0; j < n; j++){
            int x = rand() % 2;
            a[i][j] = char(x + '0');
        }
    }
    char arr[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = 'X';
        }
    }
    char arr2[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] == '0'){
                    int cnt = 0;
                for(int it1 = i - 1; it1 < i + 1 && it1 < m; it1++){
                    for(int it2 = j - 1; it2 < j + 1 && it2 < n; it2++){
                        if(a[it1][it2] == '1'){
                            cnt++;
                        }
                    }
                }
                arr2[i][j] = char(cnt + '0');
            }
        }
    }
    while(check(a, m, n))
    {
        int p, q; cin >> p >> q;
        if(a[p][q] == '1'){
            cout << "You are dead" << endl;
            for(int i = 0; i < m; i++){
                for(int j = 0; j < n; j++){
                    cout << a[i][j] << " ";
                }
                cout << endl;
            }
            return 0;
        }else{
            cout << arr2[p][q] << endl;
        }
    }

    cout << "Games has ended" << endl;

}

//B2
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


int main(int argc, char* argv[])
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

