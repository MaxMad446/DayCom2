// Auto-generated module | 2026-05-12T20:44:07.614813
#include <iostream>
#include <vector>

int compute_760() {
    int base = 433;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_760() << std::endl;
    return 0;
}
