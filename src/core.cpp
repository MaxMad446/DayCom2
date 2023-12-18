// Auto-generated module | 2026-05-13T21:02:50.655157
#include <iostream>
#include <vector>

int compute_374() {
    int base = 174;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_374() << std::endl;
    return 0;
}
