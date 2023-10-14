// Auto-generated module | 2026-05-13T20:57:23.426744
#include <iostream>
#include <vector>

int compute_708() {
    int base = 448;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_708() << std::endl;
    return 0;
}
