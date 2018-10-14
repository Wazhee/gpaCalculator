#include <iostream>
#include <iomanip>
#include <iostream>

using namespace std;

void getGrades(string[], int);
void getCredits(double[], int);
double getGpa(string[], double[], int);

int main(){
    int numClasses, score;
    cout << "Please enter the number of classes: " << endl;
    cin >> numClasses;
    cout << "\n";
    cin.ignore();
    
    double creditHours[numClasses];
    string grades[numClasses];
    
    getGrades(grades, numClasses);
    getCredits(creditHours, numClasses);
    
    double gpa = getGpa(grades, creditHours, numClasses);
    
    cout << "GPA: " <<fixed << setprecision(2) << gpa << endl;
    
    return 0;
}

void getGrades(string grades[], int numClasses){
    for(int i = 0; i < numClasses; i++){
        cout << "\nPlease enter the grade for class #" << i + 1 << ": ";
        cin >> grades[i];
    }
}
void getCredits(double creditHours[], int numClasses){
    for(int i = 0; i < numClasses; i++){
        cout << "\nPlease enter the number of credits for class #" << i + 1 << ": ";
        cin >> creditHours[i];
    }
}

double getGpa(string grades[], double creditHours[], int numClasses){
    double gpa = 0, score[numClasses], totalScore = 0, totalCredit = 0;
    for(int i = 0; i < numClasses; i++){
        if(grades[i] == "A"){
            score[i] = 4.0;
        }
        else if(grades[i] == "B"){
            score[i] = 3.0;
        }
        else if(grades[i] == "C"){
            score[i] = 2.0;
        }
        else{
            score[i] = 1.0;
        }
    }
    
    for(int i = 0; i < numClasses; i++){
        totalScore += score[numClasses];
        gpa += (score[i] * creditHours[i]);
        totalCredit += creditHours[i];
        
    }
    return gpa/ totalCredit;
    
}
//for(int i = 0; i < numClasses; i++){
//  gpa += (score[i] * creditHours[i]);
//  totalCredits += creditHours[i];
//}

