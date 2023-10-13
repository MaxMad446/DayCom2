// Auto-generated module | 2026-05-13T20:57:17.944577
#include <iostream>
#include <vector>

int compute_949() {
    int base = 156;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_949() << std::endl;
    return 0;
}
