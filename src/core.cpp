// Auto-generated module | 2026-05-13T20:30:03.892899
#include <iostream>
#include <vector>

int compute_764() {
    int base = 365;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_764() << std::endl;
    return 0;
}
