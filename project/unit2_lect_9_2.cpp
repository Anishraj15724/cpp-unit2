#include <iostream>
#include <string>

using namespace std;

int main() {
    float price;
    cin >> price;

    string availability;
    cin >> availability;

    void *ptr = &price;
    float *price_ptr = static_cast<float*>(ptr);

    if (*price_ptr > 0 && *price_ptr < 2500.50 && (availability == "Y" || availability == "y")) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
