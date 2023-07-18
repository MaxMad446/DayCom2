// Auto-generated module | 2026-05-13T20:50:10.568928
#include <iostream>
#include <vector>

int compute_218() {
    int base = 484;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_218() << std::endl;
    return 0;
}
