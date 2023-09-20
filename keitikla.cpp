#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Lithuanian");
    int operacija,z;
    double kiek=0;
    double GBP_Bendras = 0.8593;
    double GBP_Pirkti = 0.8450;
    double GBP_Parduoti = 0.9060;

    double USD_Bendras = 1.071;
    double USD_Pirkti = 1.0547;
    double USD_Parduoti = 1.1309;

    double INR_Bendras = 88.8260;
    double INR_Pirkti = 85.2614;
    double INR_Parduoti = 92.8334;

    cout << "Sveiki atvyke į valiutos keitiklą" << endl;
    cout << fixed << setprecision(2);
    cout << "Kokia opercija noretumet atlikti?" << endl;
    cout << "Valiutos palyginimas 1" << endl;
    cout << "Valiutos pirkimas spauskite 2." << endl;
    cout << "Valiutos pardavimas spauskite 3" << endl;
    cin >> operacija;

    if (operacija == 1) {
        cout << "Kokia valiuta norite lyginti" << endl;
        cout << "1.GBP 2.USD 3.INR :" << endl;
        cin >> z;
        if (z == 1) {
            cout << "Vienas euras lygus " << GBP_Bendras <<" GBP"<< endl; }
        else if (z == 2) {
            cout << "Vienas euras lygus " << USD_Bendras << " USD" << endl; }
        else {
            cout << "Vienas euras lygus " << INR_Bendras << " INR" << endl;}
        }
    else if (operacija == 2) {
        cout << "Kokia valiuta norite pirkti" << endl;
        cout << "1. GBP 2. USD 3. INR :" << endl;
        cin >> z;
        cout << "Kiek euru noretumet pakeisti? " << endl;
        cin >> kiek;
        if (z == 1) {
            cout << "Uz " << kiek << " eur gausite " <<kiek * GBP_Parduoti << endl;
        }
        else if (z == 2) {
            cout << "Uz " << kiek << " eur gausite " << kiek * USD_Parduoti << endl;
        }
        else if (z == 3) {
            cout << "Uz " << kiek << " eur gausite " << kiek * INR_Parduoti << endl;
        }
}
    else if (operacija == 3) {
        cout << "Kokia valiuta norite parduoti" << endl;
        cout << "1. GBP 2. USD 3. INR :" << endl;
        cin >> z;
        cout << "Kiek valiutos noretumet pakeisti? " << endl;
        cin >> kiek;
        if (z == 1) {
            cout << "Uz " << kiek << " GBP gausite " << kiek / GBP_Pirkti <<" EUR"<< setprecision(3)<< endl;
        }
        else if (z == 2) {
            cout << "Uz " << kiek << " USD gausite " << kiek / USD_Pirkti <<" EUR"<< endl;
        }
        else if (z == 3) {
            cout << "Uz " << kiek << " INR gausite " << kiek / INR_Pirkti <<" EUR"<< setprecision(3)<< endl;
        }
    }



    return 0;
}