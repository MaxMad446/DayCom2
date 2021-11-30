// Auto-generated module | 2026-05-11T20:41:07.477429
#include <iostream>
#include <vector>

int compute_821() {
    int base = 51;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_821() << std::endl;
    return 0;
}
