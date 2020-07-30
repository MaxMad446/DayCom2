// Auto-generated module | 2026-05-11T19:37:03.824923
#include <iostream>
#include <vector>

int compute_186() {
    int base = 388;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_186() << std::endl;
    return 0;
}
