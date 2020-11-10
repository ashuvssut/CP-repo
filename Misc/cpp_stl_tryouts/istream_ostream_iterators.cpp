// C++ STL stream iterator
#include <algorithm>
#include <iterator>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void){
    // vector container
    vector<string> strvec;

    // container iterator
    vector<string>::iterator Iter;

    // read from the standard input until EOF/error
    // the EOF is platform dependent...
    // then copy (inserting) to strvec vector...
    // copy from begin to end of source, to destination
    cout << "Enter some string (EOF) to terminate: " << endl;
    copy(istream_iterator<string>(cin), istream_iterator<string>(), back_inserter(strvec));
    // print the result
    cout << "\nstrvec vector data: ";
    for (Iter = strvec.begin(); Iter != strvec.end(); Iter++)
        cout << *Iter << " ";

    cout << endl;

    // do some sorting
    sort(strvec.begin(), strvec.end());

    // print the result
    cout << "\nstrvec vector data: ";

    for (Iter = strvec.begin(); Iter != strvec.end(); Iter++)
        cout << *Iter << " ";

    cout << endl << endl;

    // print all elements without duplicates to standard output
    unique_copy(strvec.begin(), strvec.end(), ostream_iterator<string>(cout, "\n"));

    return 0;
}