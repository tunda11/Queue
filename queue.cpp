#include <iostream>
#include <string>

using namespace std;

#include "queue.h"

int main()
{
    queue* test = new queue();
    test->enqueue (26, "AL", "GI", 2.2);
    test->enqueue (337, "WE", "ME", 1.7);
    test->enqueue (95, "LA", "LA", 2.9);
    
    cout<<"\nYou have now enqueue'd 3 seperate data values\n";
    
     cout << "\nDisplay List:\n";
        cout << test->dList();
        cout << "\n";
        
        cout << "Display Names:\n";
        cout << test->dNames() << "\n";
    
    cout << "You have just dequeue'd:";  
    test->dequeue ();
    
        cout << "\nDisplay List:\n";
        cout << test->dList() << "\n";
        
        cout << "Display Names:\n";
        cout << test->dNames() << "\n";
        
     test->enqueue (84, "QUE", "SERA", 3.37);
    
     cout << "\nAnother data value has just been enqueue'd\n";
     
        cout << "\nDisplay List:\n";
        cout << test->dList() << "\n";
        
        cout << "Display Names:\n";
        cout << test->dNames() << "\n";
    return 0;
}
