// Auto-generated module | 2026-05-11T20:38:21.728585
#include <iostream>
#include <vector>

int compute_818() {
    int base = 134;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_818() << std::endl;
    return 0;
}
