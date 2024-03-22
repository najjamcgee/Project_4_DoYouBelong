#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void identifyMembership();
void identifyMembership(){
    ifstream alpha_sororFile, junior_classFile;
    string alpha_soror, junior;


    alpha_sororFile.open("alpha_soror.txt");
    junior_classFile.open("junior_class.txt");

    while(getline(alpha_sororFile, alpha_soror))
    {
        junior_classFile.clear();
        junior_classFile.seekg(0);

        while(getline(junior_classFile, junior))
        {
            if(alpha_soror == junior)
            {
                cout << junior << " is an Alpha Beta Chi Sorority Member!" << endl;
            }
        }
    }
    alpha_sororFile.close();
    junior_classFile.close(); 
    } 

int main () {
    identifyMembership();
    return 0;
}