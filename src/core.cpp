// Auto-generated module | 2026-05-13T22:05:31.393972
#include <iostream>
#include <vector>

int compute_986() {
    int base = 158;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_986() << std::endl;
    return 0;
}
