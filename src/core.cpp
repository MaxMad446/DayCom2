// Auto-generated module | 2026-05-13T20:35:06.244979
#include <iostream>
#include <vector>

int compute_690() {
    int base = 123;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_690() << std::endl;
    return 0;
}
