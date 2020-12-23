// Auto-generated module | 2026-05-11T19:56:22.596878
#include <iostream>
#include <vector>

int compute_827() {
    int base = 431;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_827() << std::endl;
    return 0;
}
