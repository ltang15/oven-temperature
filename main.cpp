#include <iostream>
using namespace std;
int lowTemp (int hundreds1, int tens1, int ones1);
int highTemp(int hundreds2, int tens2, int ones2 );

int temp, ones, tens, hundreds;

int ones1, tens1, hundreds1, ones2, tens2, hundreds2; // ones1, tens1, hundreds1 are digits for low temp
// ones2, tens2, hundreds2 are digits for high temp


int main () {
    // oven temperature problem


    cout << "Type in the recipe temperature (hundreds/space/tens/space/ones)" << endl;
    cin >> hundreds >> tens >> ones;


    if (ones != 1 && ones != 4 && ones != 7 && tens != 1 && tens != 4 && tens != 7 &&
        hundreds != 1 && hundreds != 4 && hundreds != 7) {
        // Temperature does not contain 1, 4, 7
        temp = hundreds *100 + tens * 10 + ones;
        cout << "The desired temperature is " << temp << endl;

    } else {

    }

        cout << "The next smallest temperature is " << lowTemp (hundreds1, tens1, ones1) << ";" << " the next highest temperature is "
             << highTemp ( hundreds2, tens2, ones2 ) << endl;


        return 0;
    }

int lowTemp (int hundreds1, int tens1, int ones1)
{

    switch (ones) {
        case 1:
        case 4:
        case 7:
            ones1 = ones - 1;
            tens1 = tens;
            hundreds1 = hundreds;
            break;
    }
    switch (tens) {
        case 1:
        case 4:
        case 7:
            ones1 = 9;
            tens1 = tens - 1;
            hundreds1 = hundreds;
            break;
    }
    switch (hundreds) {
        case 1:
        case 4:
        case 7:
            ones1 = 9;
            tens1 = 9;
            hundreds1 = hundreds - 1;
            break;
    }
    if ((ones == 1 || ones == 4 || ones == 7) && (tens == 1 || tens == 4 || tens == 7) &&
        (hundreds == 1 || hundreds == 4 || hundreds == 7)) {
        ones1 = 9;
        tens1 = 9;
        hundreds1 = hundreds - 1;
    } else if (((ones == 1 || ones == 4 || ones == 7) && (tens == 1 || tens == 4 || tens == 7))
               || ((ones == 1 || ones == 4 || ones == 7) && (hundreds == 1 || hundreds == 4 || hundreds == 7))
               || ((tens == 1 || tens == 4 || tens == 7) && (hundreds == 1 || hundreds == 4 || hundreds == 7))) {
        if (tens == 0) {
            ones1 = 9;
            tens1 = 9;
            hundreds1 = hundreds - 1;
        } else {
            ones1 = 9;
            tens1 = tens - 1;
            hundreds1 = hundreds;
        }

    }
    int ltemp;
    ltemp = hundreds1 * 100 + tens1 * 10 + ones1;
    return ltemp;

}

int highTemp(int hundreds2, int tens2, int ones2 )
    {

        switch (ones) {
            case 1:
            case 4:
            case 7:
                ones2 = ones + 1;
                tens2 = tens;
                hundreds2 = hundreds;
                break;
        }
        switch (tens) {
            case 1:
            case 4:
            case 7:
                ones2 = 0;
                tens2 = tens + 1;
                hundreds2 = hundreds;
                break;
        }
        switch (hundreds) {
            case 1:
            case 4:
            case 7:
                ones2 = 0;
                tens2 = 0;
                hundreds2 = hundreds + 1;
                break;
        }
        if ((ones == 1 || ones == 4 || ones == 7) && (tens == 1 || tens == 4 || tens == 7) &&
            (hundreds == 1 || hundreds == 4 || hundreds == 7)) {
            ones2 = 0;
            tens2 = 0;
            hundreds2 = hundreds + 1;
        } else if ((ones == 1 || ones == 4 || ones == 7) && (tens == 1 || tens == 4 || tens == 7)) {
            ones2 = 0;
            tens2 = tens + 1;
            hundreds2 = hundreds;
        } else if (((ones == 1 || ones == 4 || ones == 7) && (hundreds == 1 || hundreds == 4 || hundreds == 7))
                   || ((tens == 1 || tens == 4 || tens == 7) && (hundreds == 1 || hundreds == 4 || hundreds == 7))) {
            ones2 = 0;
            tens2 = 0;
            hundreds2 = hundreds + 1;
        }
        int htemp;
        htemp = hundreds2 * 100 + tens2 * 10 + ones2;
        return htemp;
    }
