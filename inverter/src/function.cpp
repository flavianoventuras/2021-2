#include <iostream>
#include <iomanip>
#include <vector>

using std::cout; using std::endl;
using std::vector; using std::fixed;
using std::setprecision;

int main() {
    vector<double> d_vec = {123.231, 2.2343, 0.324, 0.012,
                            26.9491092019, 11013,
                            92.001112, 0.000000234};

    for (auto &i : d_vec) {
        cout << setprecision(8) << i << " | ";
    }
    cout << endl;

    return EXIT_SUCCESS;
    
    /*
    #include <iostream>
#include <iomanip>
#include <vector>

using std::cout; using std::endl;
using std::vector; using std::fixed;
using std::setprecision;

int main() {
    vector<double> d_vec = {123.231, 2.2343, 0.324, 0.012,
                            26.9491092019, 11013,
                            92.001112, 0.000000234};

    for (auto &i : d_vec) {
        cout << fixed << setprecision(3) << i << " | ";
    }
    cout << endl;

    return EXIT_SUCCESS;
}
    */
}
