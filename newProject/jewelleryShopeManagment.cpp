#include <iostream>
#include <string.h>
#include <unistd.h>
using namespace std;

int main()
{
    bool shopping=true;
    while(shopping){
    // Welcome
    cout << "*******************************************" << endl;
    cout << "             M.M JEWELLERS." << endl;
    cout << "*******************************************" << endl;
    cout << endl;
    sleep(1);

    cout << "         WELCOME TO M.M JEWELLERS" << endl;
    cout << endl;
    sleep(1);

    // showing price of gold and silver.
    cout << "GOLD : " << "70,840" << " Per 10 GM" << endl;
    cout << "SILVER : " << "91,000" << " Per 1 KG" << endl;
    cout << endl;
    sleep(1);

    // showing items in silver and gold
    cout << "-->> ITEMS <<--" << endl;
    sleep(1);
    cout << endl;
    cout << "  0. NECKLACE" << endl;
    cout << "  1. EARRINGS" << endl;
    cout << "  2. ANTIQUE RING" << endl;
    cout << "  3. BRACELETS" << endl;
    cout << "  4. BANGELS" << endl;
    cout << "  5. ANKLETS" << endl;
    cout << "  6. TOE RING" << endl;
    cout << "  7. RANI HAAR" << endl;
    cout << "  8. NOSE RING" << endl;
    cout << "  9. MAANG TIKKA" << endl;
    cout << endl;
    sleep(1);

    // taking input from user
    int item;
    cout << "ENTER THE NUMBER FOR ITEM : " << endl;
    cin >> item;

    // taking item metal input
    cout << "ONE METAL AT ONE TIME SHOPPING ONLY" << endl;
    cout << endl;
    cout << "1. GOLD" << endl;
    cout << "2. SILVER" << endl;
    int metal;
    cin >> metal;
    sleep(1);

    // Taking Name And Some Details For Making The Bills.
    cout << "I WANT TO TAKE SOME DETAILS FOR MAKING THE BILL." << endl;
    cout << endl;
    string name;
    string place;
    string number;
    cout << "WHAT IS YOUR NAME SIR/MAM : " << endl;
    cin >> name;
    cout << "FROM WHERE YOU ARE : " << endl;
    cin >> place;
    cout << "CONTACT NUMBER : " << endl;
    cin >> number;

    // Calculation Part..!
    // FOR GOLD..!
    if (metal == 1)
    {
        cout << "ENTER THE WEIGHT OF METAL IN (mg): " << endl;
        float wtg;
        cin >> wtg;
        // charges on gold ->
        // 1000 rupyee per gram labour charges
        // 1 rupyee per miligram
        float chargesG = wtg;
        float gold_money = wtg * 7.084 + chargesG;
        sleep(2);
        

        // BILLING..!
        cout << endl;
        cout << "              M.M JEWELLERS   " << endl;
        cout << "*****************************************" << endl;
        cout << endl;
        cout << "Name : " << name << "           " << "PLACE : " << place << endl;
        cout << "CONTACT : " << number << "    " << "DATE : " << "8/6/2024" << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "TOTAL :                   " << gold_money << endl;
        cout << endl;
        cout << endl;
        cout<<"THANKS FOR VISITING..!"<<endl;
        cout << "OUR CONTACTS : 9001666009, 7372959694" << endl;
        cout << endl;
        sleep(3);
    } 


    // FOR SILVER..!
    else
    {
        sleep(1);
        cout << "ENTER THE WEIGHT OF METAL IN (gm): " << endl;
        float wts;
        cin >> wts;
        // charges on Silver
        // 10 rupya per gram labour charges.
        float chargesS = wts * 10;
        float silver_money = wts * 91 + chargesS;


        // BILLING..!
        sleep(2);
        cout << endl;
        cout << "              M.M JEWELLERS   " << endl;
        cout << "*****************************************" << endl;
        cout << endl;
        cout << "Name : " << name << "           " << "PLACE : " << place << endl;
        cout << "CONTACT : " << number << "    " << "DATE : " << "8/6/2024" << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "TOTAL :                   " << silver_money << endl;
        cout << endl;
        cout << endl;
        cout<<"THANKS FOR VISITING..!"<<endl;
        cout << "OUR CONTACTS : 9001666009, 7372959694" << endl;
        cout << endl;
        sleep(3);
    }
    cout << endl;
    }

    return 0;

}