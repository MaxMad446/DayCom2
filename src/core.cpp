// Auto-generated module | 2026-05-12T20:36:54.281662
#include <iostream>
#include <vector>

int compute_442() {
    int base = 325;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_442() << std::endl;
    return 0;
}
