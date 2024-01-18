// Auto-generated module | 2026-05-14T18:18:31.325485
#include <iostream>
#include <vector>

int compute_140() {
    int base = 345;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_140() << std::endl;
    return 0;
}
