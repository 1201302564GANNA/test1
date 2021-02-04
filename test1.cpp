#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;

// bad idea: of passing vectors to functions
// // pass by copying the vector to the function
// void displayNumbersInVector(vector<int> v ){
//     for (int i=0;i<v.size();i++)
//         cout << v[i] << " ";
//     cout << endl;
// }

// passes a const reference to the vector num
// the const will prevent the copying while
// & will prevent copying

void displayNumbersInVector(const vector<int>& v)
{
    for (int i=0; i<v.size(); i++)
        cout << v[i] << " ";
    
    //cout << v.at(i) << " ";  // v.at(i) ==== v[i]

    cout << endl;
}

void test1()
{
    cout << "test function 1" << endl;
    vector<int> num; //declared num to be a sequential container of integerd
    num.push_back(1); //add 1 into the container
    num.push_back(4); //add 4 into the container
    num.push_back(3); //add 3 into the container
    cout << "size = " << num.size() << endl; //display container's size so far
    cout << "number in container are : ";
    displayNumbersInVector(num);
}

// -----------------------------ex1.2--------------------------
// poss is a reference for positions in test2
// the results are stored in poss
//
void checkPositions(const string& secret,char guess, 
                    vector<int>& poss)حتةنةمكنط
{
    poss.clear();
    int len = secret.length(); // number of chars in the string
    for (int i=0; i<len; i++)      // to check all the characters
        if (guess == secret[i])    // compare guess with string chars
            poss.push_back(i);     // push the position to vector
}

void test2() {
    cout << "test function 2" << endl;
    string secret;
    secret = "programming....gg";
    char guess = 'g';
    vector<int> positions; 
    
    checkPositions(secret, guess, positions);
    cout << "character \'" << guess 
         << "\' appears in string \""
         << secret << "\" at position : ";
    displayNumbersInVector( positions );
}

// -----------------------------ex1.3--------------------------

void fillWordInPositions( const vector<int>& positions,
                          char charToFill, string& word )
{
    for (int i=0; i<positions.size(); i++)
        word[positions[i]] = charToFill;

    // the same
    // word[positions[i]] = charToFill;
    // word.at(positions.at(i)) = charToFill;

    // for (auto pos : positions)
    //     word[pos] = charToFill;
    
}

void test3()
{
    cout << "test function 3" << endl;
    vector<int> positions;
    positions.push_back(3);
    positions.push_back(10);
    string word;
    word = "pro_ra___n_";
    char charToFill = 'g';
    cout << "Original word is : \"" << word << "\"," << endl;
    cout << "after filling char \'" << charToFill << "\' at position ";
    displayNumbersInVector( positions );
    fillWordInPositions( positions, charToFill, word );
    cout << "word becomes \"" << word << "\"." << endl;
}

void Stage7(){
    cout << " +----+    " << endl;
    cout << " |    |    " << endl;
    cout << " |    O    " << endl;
    cout << " |   /|  " << endl;
    cout << " |    |    " << endl;
    cout << " |   / \\  " << endl;
    cout << " |  R.I.P. " << endl;
    cout << " ==========" << endl;
}

void Stage6(){
    cout << " +----+    " << endl;
    cout << " |    |    " << endl;
    cout << " |    O    " << endl;
    cout << " |   /|\\  " << endl;
    cout << " |    |    " << endl;
    cout << " |   /     " << endl;
    cout << " |         " << endl;
    cout << " ==========" << endl;
}
void Stage5(){
    cout << " +----+    " << endl;
    cout << " |    |    " << endl;
    cout << " |    O    " << endl;
    cout << " |   /|\\  " << endl;
    cout << " |    |    " << endl;
    cout << " |         " << endl;
    cout << " |         " << endl;
    cout << " ==========" << endl;
}

void Stage4(){
    cout << " +----+    " << endl;
    cout << " |    |    " << endl;
    cout << " |    O    " << endl;
    cout << " |   /|\\  " << endl;
    cout << " |         " << endl;
    cout << " |         " << endl;
    cout << " |         " << endl;
    cout << " ==========" << endl;
}

void Stage3(){
    cout << " +----+    " << endl;
    cout << " |    |    " << endl;
    cout << " |    O    " << endl;
    cout << " |   /|    " << endl;
    cout << " |         " << endl;
    cout << " |         " << endl;
    cout << " |         " << endl;
    cout << " ==========" << endl;
}

void Stage2(){
    cout << " +----+    " << endl;
    cout << " |    |    " << endl;
    cout << " |    O    " << endl;
    cout << " |    |    " << endl;
    cout << " |         " << endl;
    cout << " |         " << endl;
    cout << " |         " << endl;
    cout << " ==========" << endl;
}

void Stage1(){
    cout << " +----+    " << endl;
    cout << " |    |    " << endl;
    cout << " |    O    " << endl;
    cout << " |         " << endl;
    cout << " |         " << endl;
    cout << " |         " << endl;
    cout << " |         " << endl;
    cout << " ==========" << endl;
}

void Stage0(){
    cout << " +----+    " << endl;
    cout << " |    |    " << endl;
    cout << " |         " << endl;
    cout << " |         " << endl;
    cout << " |         " << endl;
    cout << " |         " << endl;
    cout << " |         " << endl;
    cout << " ==========" << endl;
}

void displayHangman(int stage)
{
    switch(stage){
        case 7: Stage7(); break;
        case 6: Stage6(); break;
        case 5: Stage5(); break;
        case 4: Stage4(); break;
        case 3: Stage3(); break;
        case 2: Stage2(); break;
        case 1: Stage1(); break;
        case 0: Stage0(); break;
    }
}

int main()
{
    // test1();
    // test2();
    // test3();
    for (int i=0;i<8;i++)
        displayHangman(i);
        return 0;
}
