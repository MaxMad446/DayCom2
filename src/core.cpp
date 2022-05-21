// Auto-generated module | 2026-05-13T22:12:23.611729
#include <iostream>
#include <vector>

int compute_750() {
    int base = 332;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_750() << std::endl;
    return 0;
}
