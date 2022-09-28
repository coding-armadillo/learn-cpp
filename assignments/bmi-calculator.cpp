#include <iostream>

using namespace std;

int main()
{
    float weight, height;

    cout << "weight (in pound) is ";
    cin >> weight;
    cout << "height (in inch) is ";
    cin >> height;

    float bmi = weight / (height * height) * 703;

    string classification;

    if (bmi <= 18.5)
    {
        classification = "Underweight";
    }
    else if (bmi <= 25)
    {
        classification = "Normal Weight";
    }
    else if (bmi <= 30)
    {
        classification = "Overweight";
    }
    else if (bmi <= 35)
    {
        classification = "Obesity (Class 1)";
    }
    else if (bmi <= 40)
    {
        classification = "Obesity (Class 2)";
    }
    else
    {
        classification = "Morbid Obesity";
    }

    cout << "BMI is " << bmi << endl;
    cout << "BMI classification is " << classification << endl;

    return 0;
}
