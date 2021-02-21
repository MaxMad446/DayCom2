// Auto-generated module | 2026-05-12T20:39:17.720047
#include <iostream>
#include <vector>

int compute_451() {
    int base = 271;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_451() << std::endl;
    return 0;
}
