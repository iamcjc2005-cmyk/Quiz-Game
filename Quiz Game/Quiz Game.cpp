#include <iostream>
using namespace std;

int main()
{
    char a1, a2, a3, a4, a5;

    int score = 0;

    // Question 1
    cout << "Question 1: What is 2+2? A. 4 B. 6 C. 2 D. 8" << endl;
    cin >> a1;

    if (a1 == 'A' || a1 == 'a')
    {
        score += 1;
    }

    // Question 2
    cout << "Question 2: What is 20/2? A. 20 B. 5 C. 10 D. 15" << endl;
    cin >> a2;

    if (a2 == 'C' || a2 == 'c')
    {
        score += 1;
    }

    // Question 3
    cout << "Question 3: Can you divide by 0? A. Yes B. No" << endl;
    cin >> a3;

    if (a3 == 'B' || a3 == 'b')
    {
        score += 1;
    }

    // Question 4
    cout << "Question 4: What is the first order of operations in (5+7)-6 x 2^4?" << endl;
    cout << "A. 6 x 2  B. (5+7)  C. 2^4" << endl;
    cin >> a4;

    if (a4 == 'B' || a4 == 'b')
    {
        score += 1;
    }

    // Question 5
    cout << "Question 5: What's 30 x 10? A. 3000 B. 30000 C. 300 D. 30" << endl;
    cin >> a5;

    if (a5 == 'C' || a5 == 'c')
    {
        score += 1;
    }

    // Display final score
    cout << endl;
    cout << "You got " << score << " out of 5 correct." << endl;

    return 0;
}