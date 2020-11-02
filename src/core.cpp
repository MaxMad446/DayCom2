// Auto-generated module | 2026-05-14T18:04:24.933912
#include <iostream>
#include <vector>

int compute_844() {
    int base = 113;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_844() << std::endl;
    return 0;
}
