//Authors: Scott Avery, Oz Birdett
#include <iostream>
#include <windows.h>
#include <bits/stdc++.h>
using namespace std;

void printMenu();
void printDestination(int choice);
void printFunFacts(int choice);
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
int main () {
    int choice;
    char again;
    bool check =true;
    bool menu;
    SetConsoleTextAttribute(h, 11); 
    cout << "   " << "Welcome to the Space Travel Itinerary" << endl;
    cout << " " << "You'll be taking NASA's Orion Spacecraft" << endl;
    cout << '\t' << "Which travels at 20,000 MPH" << endl;
    while(check) {
        menu = true;
        while(menu) {
            printMenu();
            SetConsoleTextAttribute(h, 11); 
            cout << "Enter the corresponding destination number:";
            cin >> choice;
            cout << endl;
            if (choice < 11 && choice > 0) {
                menu = false;
            }
            else {
                SetConsoleTextAttribute(h, 4);
                cout << "Incorrect choice." << endl;
            }
        }
        printDestination(choice);
        printFunFacts(choice);
        SetConsoleTextAttribute(h, 11);
        cout << "Would you like to go anywhere else? (Y/N):";
        cin >> again;
        if (again == 'N' || again == 'n') {
            check = false;
        }
    }
}

void printMenu() {
    SetConsoleTextAttribute(h, 11); 
    cout << '\t' << "Where would you like to go?" << endl << endl;
    cout << "1. The Sun" << '\t' << "2. Mercury" << '\t' << "3. Venus" << endl;
    cout << "4. Mars" << '\t' <<'\t' << "5. Jupiter" << '\t' << "6. Saturn" << endl;
    cout << "7. Uranus" << '\t' << "8. Neptune" << '\t' << "9. Pluto" << endl;
    cout << '\t' << '\t' << "10. The Moon" << endl << endl;
}

void printDestination(int choice) {
    string destination[] = {"The Sun", "Mercury", "Venus", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto", "The Moon"};
    string distance[] = {"91.4 Million", "48 Million", "24.8 Million", "33.9 Million", "365 Million", "750 Million", "1.6 Billion", "2.7 Billion", "2.7 Billion", "226,000 Miles"};
    string time[] = {"0.52", "0.27", "0.14", "0.19", "2.08", "4.27", "9.12", "15.39", "15.16", "0.001"};
    SetConsoleTextAttribute(h, 11); 
    cout << "Destination: "; 
    SetConsoleTextAttribute(h, 15); 
    cout << destination[choice - 1] << endl;
    SetConsoleTextAttribute(h, 11); 
    cout << "Distance from Earth: ";
    SetConsoleTextAttribute(h, 15); 
    cout << distance[choice - 1] << " Miles" << endl;
    SetConsoleTextAttribute(h, 11);
    cout << "Estimated Travel Time: ";
    SetConsoleTextAttribute(h, 15); 
    cout << time[choice - 1] << " Years" << endl;
    cout << endl;
}

void printFunFacts(int choice) {
    switch(choice) {
        case 1:
            SetConsoleTextAttribute(h, 11);
            cout << "Travel Tips:" << endl;
            SetConsoleTextAttribute(h, 15);
            cout << " * The average surface temperature is 9,998 F, make sure to bring some sunscreen!" << endl;
            cout << " * The gravity is 274 m/s^2, hopefully you have a sturdy spaceship!" << endl;
            SetConsoleTextAttribute(h, 11);
            cout << endl << "Places to Visit: " << endl;
            SetConsoleTextAttribute(h, 15);
            cout << " * Sunspot 2995" << endl << " * Sunspot 2993" << endl;
            break;
        case 2:
            SetConsoleTextAttribute(h, 11);
            cout << "Travel Tips:" << endl;
            SetConsoleTextAttribute(h, 15);
            cout << " * The atmosphere is made up of 95% CO2, plants would love this planet!" << endl;
            cout << " * Your weight is 38% less on Mercury, don't worry about gaining weight on your visit!" << endl;
            SetConsoleTextAttribute(h, 11);
            cout << endl << "Places to Visit: " << endl;
            SetConsoleTextAttribute(h, 15);
            cout << " * Caloris Basin" << endl << " * Rembrandt Basin" << endl;
            break;
        case 3:
            SetConsoleTextAttribute(h, 11);
            cout << "Travel Tips:" << endl;
            SetConsoleTextAttribute(h, 15);
            cout << " * This planet has more than 1,600 volcanoes, watch out for lava!" << endl;
            cout << " * The air pressure is 90 times the air pressure of Earth, your ears will definitely pop!" << endl;
            SetConsoleTextAttribute(h, 11);
            cout << endl << "Places to Visit: " << endl;
            SetConsoleTextAttribute(h, 15);
            cout << " * Menat Undae" << endl << " * Baltis Vallis" << endl;
            break;
        case 4:
            SetConsoleTextAttribute(h, 11);
            cout << "Travel Tips:" << endl;
            SetConsoleTextAttribute(h, 15);
            cout << " * Mars is the most likely planet in the solar system to sustain life, watch out for aliens!" << endl;
            cout << " * This plant is home to intense dust storms, make sure you don't get blown away!" << endl;
            SetConsoleTextAttribute(h, 11);
            cout << endl << "Places to Visit: " << endl;
            SetConsoleTextAttribute(h, 15);
            cout << " * Medusae Fossae" << endl << " * Gale Crater" << endl;
            break;
        case 5:
            SetConsoleTextAttribute(h, 11);
            cout << "Travel Tips:" << endl;
            SetConsoleTextAttribute(h, 15);
            cout << " * The magnetic field here is 14 times stronger than Earth's, compasses will work very well here! " << endl;
            cout << " * Jupiter is the fattest spinning planet in our solar system, make sure to hold on!" << endl;
            SetConsoleTextAttribute(h, 11);
            cout << endl << "Places to Visit: " << endl;
            SetConsoleTextAttribute(h, 15);
            cout << " * Great Red Spot" << endl << " * Red Jr." << endl;
            break;
        case 6:
            SetConsoleTextAttribute(h, 11);
            cout << "Travel Tips:" << endl;
            SetConsoleTextAttribute(h, 15);
            cout << " * Saturn has 150 moons, the tides must be high!" << endl;
            cout << " * This planet is the flattest in the solar system, expect a smooth journey!" << endl;
            SetConsoleTextAttribute(h, 11);
            cout << endl << "Places to Visit: " << endl;
            SetConsoleTextAttribute(h, 15);
            cout << " * The Hexagon" << endl << " * Fhoebe Moon" << endl;
            break;
        case 7:
            SetConsoleTextAttribute(h, 11);
            cout << "Travel Tips:" << endl;
            SetConsoleTextAttribute(h, 15);
            cout << " * This planet is the coldest in our solar system, you'll definitely need to bring a coat!" << endl;
            cout << " * Uranus's atmosphere is mostly made of gas, good luck finding out who cut the cheese!" << endl;
            SetConsoleTextAttribute(h, 11);
            cout << endl << "Places to Visit: " << endl;
            SetConsoleTextAttribute(h, 15);
            cout << " * Titania Moon" << endl << " * The Dark Spot" << endl;
            break;
        case 8:
            SetConsoleTextAttribute(h, 11);
            cout << "Travel Tips:" << endl;
            SetConsoleTextAttribute(h, 15);
            cout << " * The surface gravity here is almost Earth like, good thing you're already used to it!" << endl;
            cout << " * Neptune has the strongest winds in the solar system, bring a kite!" << endl;
            SetConsoleTextAttribute(h, 11);
            cout << endl << "Places to Visit: " << endl;
            SetConsoleTextAttribute(h, 15);
            cout << " * Arago Ring" << endl << " * Triton Moon" << endl;
            break;
        case 9:
            SetConsoleTextAttribute(h, 11);
            cout << "Travel Tips:" << endl;
            SetConsoleTextAttribute(h, 15);
            cout << " * Pluto is 1/3 water, don't worry about getting thirsty!" << endl;
            cout << " * There is sometimes an atmosphere present, plan your trip wisely!" << endl;
            SetConsoleTextAttribute(h, 11);
            cout << endl << "Places to Visit: " << endl;
            SetConsoleTextAttribute(h, 15);
            cout << " * Burney Crater" << endl << " * Tartarus Dorsa" << endl;
            break;
        case 10:
            SetConsoleTextAttribute(h, 11);
            cout << "Travel Tips:" << endl;
            SetConsoleTextAttribute(h, 15);
            cout << " * The Moon's surface is littered with craters, it'll be a bumpy ride!" << endl;
            cout << " * There are moonquakes caused by Earth's gravitational pull, it might get shaky! " << endl;
            SetConsoleTextAttribute(h, 11);
            cout << endl << "Places to Visit: " << endl;
            SetConsoleTextAttribute(h, 15);
            cout << " * Sea of Clouds" << endl << " * Copernicus Crater" << endl;
            break;
    }
}
/*
Sources:

https://airandspace.si.edu/exhibitions/exploring-the-planets/online/solar-system/mercury/surface.cfm

https://soho.nascom.nasa.gov/sunspots/

https://en.wikipedia.org/wiki/List_of_geological_features_on_Venus

https://www.space.com/41254-touring-mars-red-planet-road-trip.html

https://science.howstuffworks.com/10-space-landmarks.htm

https://artsandculture.google.com/story/astounding-sights-at-saturn-nasa/xgWRXjSZemg2JQ?hl=en

https://www.universetoday.com/19279/10-interesting-facts-about-uranus/

https://www.universetoday.com/21999/10-interesting-facts-about-neptune/

https://www.nasa.gov/feature/pluto-features-given-first-official-names

https://www.forbes.com/sites/startswithabang/2016/11/14/the-top-five-features-to-find-on-the-full-moon/?sh=7b618a794ae2

https://www.weather.gov

https://www.space.com

https://solarsystem.nasa.gov

https://sciencing.com

https://www.nasa.gov

https://www.esa.int

http://abyss.uoregon.edu/

https://scied.ucar.edu/

https://www.diviner.ucla.edu/

https://www.livescience.com

https://www.smartconversion.com/

https://space-facts.com/

https://astro.umaine.edu/

https://www.universetoday.com/

https://space-facts.com/

https://theplanets.org/

*/
