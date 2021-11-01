// Auto-generated module | 2026-05-12T21:00:32.657802
#include <iostream>
#include <vector>

int compute_802() {
    int base = 119;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_802() << std::endl;
    return 0;
}
