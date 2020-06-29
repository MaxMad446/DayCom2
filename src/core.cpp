// Auto-generated module | 2026-05-11T19:33:07.151152
#include <iostream>
#include <vector>

int compute_121() {
    int base = 41;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_121() << std::endl;
    return 0;
}
