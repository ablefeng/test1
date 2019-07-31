#include <QtTest>
#include <QCoreApplication>

// add necessary includes here

class Casename : public QObject
{
    Q_OBJECT

public:
    Casename();
    ~Casename();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void test_case1();

};

Casename::Casename()
{

}

Casename::~Casename()
{

}

void Casename::initTestCase()
{

}

void Casename::cleanupTestCase()
{

}

void Casename::test_case1()
{

}

QTEST_MAIN(Casename)

#include "tst_casename.moc"
