#include <iostream>
#include <vector>;

using namespace std;

int main() {
    cout << "" << endl;

    vector <double> notes;
    int read{};
    double sum{0}, average{0};

    cout << "Enter the four notes of students: ";
    cin >> read; notes.push_back(read);
    cin >> read; notes.push_back(read);
    cin >> read; notes.push_back(read);
    cin >> read; notes.push_back(read);

    for(int i=0;i <= notes.size();i++){
        sum+=notes[i];
    }

    average = sum / 4;
    
    cout << "Average: " << average;

    cout << "" << endl;
    return 0;
}