#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

string destination="D:/Programowanie/Zadania/Fstream/fstream/";


void Zad1()
{

    fstream plik;
    plik.open((destination+"marcel.txt").c_str(), ios::out | ios::app);
    if(plik.good())
    {
        cout << "1";
    }
    else
    {
        cout << "0";
    }
    plik << "aaaa" << endl;
    plik << "bbbb" << endl;
    plik.close();

}

void Add(string path, string napis)
{
    fstream plik;
    plik.open(path.c_str(), ios::out | ios::app);
    plik << endl << napis;
    plik.close();
}

void Zad2()
{
    string napis;
    string path=destination+"marcel.txt";
    cin >> napis;
    Add(path,napis);
}

void Write3(string path)
{
    fstream plik;
    plik.open(path.c_str(), ios::in);
    string linia;
    while(getline(plik,linia))
    {
        cout << linia << endl;
    }
    plik.close();
}

void Zad3()
{
    string path=destination+"marcel.txt";
    Write3(path);
}

class PlikOUT
{
    fstream plik;
public:
    PlikOUT(string nazwa)
    {
        plik.open(nazwa.c_str(), ios::out);
    }
    ~PlikOUT() {plik.close();}
    void WriteLong()
    {
        string napis;
        cin >> napis;
        plik << napis;
    }
    void WriteShort()
    {
        char letter;
        cin >> letter;
        plik << letter;
    }
};

class PlikIN
{
public:
    ifstream plik;
    PlikIN(string path)
    {
        plik.open(path.c_str(), ios::in);
    }
    ~PlikIN()
    {
        plik.close();
    }

    void ReadLong()
    {
        string napis;
        while(getline(plik,napis))
        {
            cout << napis << endl;
        }
    }

    void ReadShort()
    {
        char letter;
        while(plik.get(letter))
        {
            cout << letter;
        }
    }

    void By10()
    {
        char block[10];
        do
        {
            int i=0;
            while(block[i]!='\0'){
                cout << block[i]; i++;
            }
            cout << endl;
        }
        while(plik.read(block, sizeof(block)));
    }
};



void Zad4()
{
    PlikIN file((destination+"marcel.txt").c_str());
    cout << file.plik.tellg() << endl;
    file.ReadShort();
    cout << endl;
    file.plik.clear();

    cout << endl << "Zmiana 1." << endl;
    file.plik.seekg(0);
    file.ReadLong();
    cout << endl;
    file.plik.clear();
    cout << endl << "Zmiana 2." << endl;
    file.plik.seekg(0);
    file.By10();
    file.plik.clear();
    cout << endl << "Zmiana 3." << endl;
    file.plik.seekg(5);
    cout << file.plik.tellg() << endl;

}


void Zad5()
{
    ifstream plik;
    plik.open((destination+"marcel.txt").c_str(), ios::in);
    char a;
    while(plik.get(a))
    {
        if (a==' ') cout << endl;
        else cout << a;
    }
    plik.close();
    cout << endl;
}

void Zad6()
{
    ofstream plik1;
    ifstream plik2;
    plik2.open((destination+"marcel.txt").c_str(), ios::in);
    plik1.open((destination+"marcel1.txt").c_str(), ios::out);
    string line;
    while(getline(plik2,line))
    {
        plik1 << line << endl;
    }
    plik1.close();
    plik2.close();
}

void Zad7()
{
    ofstream file;
    file.open((destination+"marcel.txt").c_str(), ios::out | ios::app);
    char a;
    while (a!='.')
    {
        cin >> a;
        file << a;
    }
    file.close();
}
void Zad8()
{
    ifstream ifile;
    ofstream ofile;
    ifile.open((destination+"marcel.txt").c_str(), ios::in);
    ofile.open((destination+"plik5.txt").c_str(), ios::out | ios::app);
    cout << ifile.tellg();
    char a;
    ifile.get(a);
    ifile.clear();
    ifile.seekg(-2, ifile.end);
    while(ifile.tellg()!=0);
    {
        cout << ifile.tellg();
        ifile.get(a);
        cout << a;
        ifile.seekg(-2, ifile.cur);
        ofile << a;
    }
    ifile.close();
    ofile.close();
}


float **matrix(int v)
{
    ifstream file;
    file.open((destination+"plik5.txt").c_str(), ios::in);
    float **m=new float *[v];
    string value;
    for(int i=0; i<v; i++)
    {
        m[i]=new float [3];
        for (int j=0; j<3; j++)
        {
            file >> value;
            m[i][j]=atof(value.c_str());
        }
    }
    for(int i=0; i<v; i++)
    {
        for (int j=0; j<3; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
        delete [] m[i];
    }
    delete [] m;
    file.close();
}

void Zad9()
{
    int v;
    cin >> v;
    matrix(v);
}

void Write10(float arr[], int n)
{
    ofstream file;
    file.open((destination+"plik6.txt").c_str(), ios::out);
    for (int i=0; i<n; i++)
    {
        file << arr[i] << " | ";
    }
    cout << endl;
    file << endl << sizeof(float)*n;
    file.close();
}

void Zad10()
{
    int n;
    cin >> n;
    float arr[n];
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    Write10(arr,n);
}



int main()
{
    cout << "Zad1-16" << endl;
    int x;
    cin >> x;
    switch(x)
    {

        case 1:
        {
            Zad1();
            break;
        }

        case 2:
        {
            Zad2();
            break;
        }
        case 3:
        {
            Zad3();
            break;
        }
        case 4:
        {
            Zad4();
            break;
        }
        case 5:
        {
            Zad5();
            break;
        }
        case 6:
        {
            Zad6();
            break;
        }
        case 7:
        {
            Zad7();
            break;
        }
        case 8:
        {
            Zad8();
            break;
        }
        case 9:
        {
            Zad9();
            break;
        }
        case 10:
        {
            Zad10();
            break;
        }/*
        case 11:
        {
            Zad11();
            break;
        }
        case 12:
        {
            Zad12();
            break;
        }
        case 13:
        {
            Zad13();
            break;
        }
        case 14:
        {
            Zad14();
            break;
        }
        case 15:
        {
            Zad15();
            break;
        }
        case 16:
        {
            Zad16();
            break;
        }
         */
    }
    return 0;
}
