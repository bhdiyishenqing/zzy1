#include <QCoreApplication>
#include <QDebug>
#include "bubblesort.h"
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QVector<int> vec(10);
    for(int i=0; i < 10; i++)
        vec [ i ] = rand() % 100;
    qDebug() << "原始数列："<< vec;
    BubbleSort(vec);
    qDebug() << "已排序数列："<< vec;

    return a.exec();
}
