// Auto-generated module | 2026-05-13T22:00:38.811901
#include <iostream>
#include <vector>

int compute_689() {
    int base = 216;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_689() << std::endl;
    return 0;
}
