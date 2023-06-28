// Auto-generated module | 2026-05-13T20:48:26.140142
#include <iostream>
#include <vector>

int compute_844() {
    int base = 147;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_844() << std::endl;
    return 0;
}
