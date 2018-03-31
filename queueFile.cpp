
#include <iostream> 
#include <fstream>
#include <string>
#include "queueFile.h"

using namespace std;

int main()
{
    queue* test = new queue();
    
    ifstream inFile;
    
    inFile.open("pineapple.txt");
    
    if (!inFile)
    {
        cout << "Unable to open file as requested";
        
    }
    else
    {
        int num;
        string a;
        string b;
        string c;
        string d;
        string e;
        int count = 0;
        char comma = ',';
        while (!inFile.eof())
        {
            //test->enqueue(num, a, b, c, d, e);
            inFile  >> num >> comma;
                getline(inFile, a, ',');
                getline(inFile, b, ',');
                getline(inFile, c, ',');
                getline(inFile, d, ',');
                getline(inFile, e, '\n');
           
                
                if (!inFile.eof())
		  {
			//a = strip(a);
			//b  = strip(b);
			//c = strip(c);
			//d = strip(d);
			//e = strip(e);
                   
			//record = makeRecord(id, first, last, place, timeOfYear, payType, bookingType);
						
						
			test->enqueue(num, a, b, c, d, e);
		  }
        }
        
        //cout << num;
        cout << test->dList() << endl;
        
        cout << "You have just dequeue'd:";  
        test->dequeue();
        
        cout << "You have just dequeue'd:";  
        test->dequeue();
        
        
        cout<< "\n";
        cout << test->dList() << endl; 
        
    }   
    
    
    return 0;
}
