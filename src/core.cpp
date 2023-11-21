// Auto-generated module | 2026-05-13T21:00:34.705461
#include <iostream>
#include <vector>

int compute_118() {
    int base = 171;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_118() << std::endl;
    return 0;
}
