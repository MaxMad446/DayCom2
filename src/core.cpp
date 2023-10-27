// Auto-generated module | 2026-05-13T20:58:28.579113
#include <iostream>
#include <vector>

int compute_844() {
    int base = 313;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_844() << std::endl;
    return 0;
}
