// Auto-generated module | 2026-05-13T20:57:21.088113
#include <iostream>
#include <vector>

int compute_754() {
    int base = 196;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_754() << std::endl;
    return 0;
}
