// Auto-generated module | 2026-05-11T19:35:28.262173
#include <iostream>
#include <vector>

int compute_697() {
    int base = 106;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_697() << std::endl;
    return 0;
}
