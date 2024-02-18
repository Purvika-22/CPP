// 

#include <iostream>
#include "OnlineExam.h"
#include "OfflineExam.h"

int main()
{
    int N;
    std::cout << "\nEnter the N value = ";
    std::cin >> N;

    Exam **e1 = new Exam *[N];

    for (int i = 0; i < N; i++)
    {
        e1[i] = new OnlineExam();
        e1[i]->accept();
        e1[i]->display();
    }

    // OnlineExam specific operations
    for (int i = 0; i < N; i++)
    {
        OnlineExam *on_exam = dynamic_cast<OnlineExam *>(e1[i]);
        if (on_exam)
        {
            on_exam->AverageMarks(on_exam, N);
        }
    }

    int NUM;
    std::cout << "\nEnter the NUM value = ";
    std::cin >> NUM;

    Exam **e2 = new Exam *[NUM];

    for (int i = 0; i < NUM; i++)
    {
        e2[i] = new OfflineExam();
        e2[i]->accept();
        e2[i]->display();
    }

    // OfflineExam specific operations
    for (int i = 0; i < NUM; i++)
    {
        OfflineExam *off_exam = dynamic_cast<OfflineExam *>(e2[i]);
        if (off_exam)
        {
            off_exam->changeLocation("chennai");
        }
    }

    // Clean up memory
    for (int i = 0; i < N; i++)
    {
        delete e1[i];
    }
    delete[] e1;

    for (int i = 0; i < NUM; i++)
    {
        delete e2[i];
    }
    delete[] e2;

    return 0;
}
