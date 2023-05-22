#include <stdio.h>
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <cmath>
#define endl '\n'


using namespace std;

int main(){

        ios_base::sync_with_stdio(false); cin.tie(NULL);
       /* string firstName = "Yeamin Mahmud";
        string lastName = "Resin";
        string fullName = firstName + " " + lastName;
        string anotherWay = firstName.append(lastName);
        cout << fullName << endl;
        cout << anotherWay << endl;
*/
       /* string txt = "ANJKSKJDPSJDOIASJDOIASJOIAS";
        cout << "The length of the txt string is: " << txt.length()<< endl;

        string text1 = "It\'s all right. ";
        cout << text1 << endl;

        string text2 = "The character \\ is called backslash";
        cout << text2 << endl;
*/
/*
        string firstName;
        cout << "Type your first name: ";
        cin >> firstName;
        cout << "Your name is: " << firstName;
*/
/*

        std::string fullName;
        std::cout << "Type your full name: ";
        std::getline(cin, fullName);
        std::cout << "Your Name is: " << fullName;
*/
/*        double x,y,z;
        cin >> x;
        cin >> y;
        cin >> z;

        cout << sqrt(x) << endl;
        cout << round(y) << endl;
        cout << log(2)<< endl;

*/
/*
        int x = 10;
        int y = 9 ;
        cout << (x>y);
*/

//Short Hand If_else(Tenary Operator)

// variable = (condition)? expressionTrue: ExpressionFalse;
/*
int time = 20;
string result = (time<18) ? "Good Day" : "Good evening";
cout << result;


        return 0 ;
*/

/*
int day = 6;
switch(day){
case 6:
    cout << "Today is Saturday";
    break;

    case 7:
    cout << "Today is sunday";
    break;

    default:
        cout << "Looking forward to the weekend";


    return 0 ;
*/
/*
    int i = 0 ;
    do {
        cout << i << endl;
        i++;
    }while(i< 5);
    return 0;
*/
/*
for(int i = 0; i< 5; i++){
    cout << i << endl ;

}
*/
/*
int myNumbers[5] = {10,20,30,40,50};
for(int i: myNumbers){
    cout << i << endl;
*/

// For each technique
/*
string cars[4]  = {"Volvo", "BMW", "Ford", "Mazda"};
for (string i: cars){
    cout << i << endl;
}
*/

/*
string cars[5] = {"my", "baby", "is", "shark", "do"};
for(int i =0; i< 5; i++){
    cout << i << " = " << cars[i] << endl;
}
for(string i: cars){
    cout << i << endl ;
}
*/

/*
int myNumbers[5] = {10,20,30, 40, 50};
for(int i =0; i< sizeof(myNumbers)/sizeof(int);i++){
    cout << myNumbers[i] << endl;
}


string cars[5] = {"my", "baby", "is", "shark", "do"};
int getArrayLength = sizeof(cars)/sizeof(string);
cout << getArrayLength;
*/
/*

string letters[2][2][2] = {
  {
    { "A", "B" },
    { "C", "D" }
  },
  {
    { "E", "F" },
    { "G", "H" }
  }
};

for(int i = 0; i< 2; i++){
        for(int j = 0; j< 2; j++)
            for(int k= 0; k<2 ; k++)
                cout << letters[i][j][k] << endl;
}

/*


string letters[2][4]= {
{"a","b","c","d"},
{"e","f","g","h"}
};

for(int i = 0; i< 2; i++)
    for(int j = 0; j< 4; j++)
        cout << letters[i][j] << "\n";
*/



bool ships[4][4]={
{0,1,1,0},
{0,0,0,0},
{0,0,1,0},
{0,0,1,0},
};

// Keep track of how many hits the player has and how many turns they have played in these variables
int hits = 0;
int numberOfTurns = 0;

while(hits<4){
    int row, column;
    cout << "Selecting coordinates" << endl;

    // ask the player for a row
    cout << "Choose a row number number between 0 and 3" << endl;
    cin >> row;

    // Ask the player for the column
    cout << "Choose a column number between 0 and 3: "<< endl;
    cin >> column;

    if(ships[row][column]){
        // if the player hit into a ship, remove it by setting the value to zero.
        ships[row][column] = 0 ;

        hits++;
        cout << "hit! "<< (4-hits) << " Left.\n\n";
    }else{
        // tell the player that they missed
        cout << "Miss\n\n";
    }
    numberOfTurns++;
}
cout << "victory!\n";
cout << "You won in "<< numberOfTurns << "Turns ";
return 0;
}

