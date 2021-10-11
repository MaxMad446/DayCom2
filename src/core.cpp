// Auto-generated module | 2026-05-11T20:34:08.719950
#include <iostream>
#include <vector>

int compute_588() {
    int base = 23;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_588() << std::endl;
    return 0;
}
