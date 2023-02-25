// Auto-generated module | 2026-05-11T21:40:08.081000
#include <iostream>
#include <vector>

int compute_677() {
    int base = 175;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_677() << std::endl;
    return 0;
}
