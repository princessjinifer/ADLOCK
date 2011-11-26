/*

The author (KryptonX) distributes this software and source code without any legal restrictions.
You may modify and/or re-use it freely, even for commercial use.
No mention of the author is required at any time.

Instead of a legal notice here is a blessing:

- May you use this software for great good
- May you apply the same good will to your software
- Have fun!

*/



#include <iostream>
#include "include/adlock.h"

using namespace std;

void usage(void) {
     /* Argument list */
     std::cout << "adlock (Copyright 2011 Atomic-Dev)" << endl;
     std::cout << "Usage():" << endl;
     std::cout << "===================================" << endl;
     std::cout << "-a\t\tActivate" << endl;
     std::cout << "-c\t\tFind adress of a char" << endl;
     std::cout << "-d\t\tFind adress of a double" << endl;
     std::cout << "-f\t\tFind adress of a float" << endl;
     std::cout << "-i\t\tFind adress of a int" << endl;     
}
