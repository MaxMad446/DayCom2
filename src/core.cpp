// Auto-generated module | 2026-05-12T03:59:08.774166
#include <iostream>
#include <vector>

int compute_940() {
    int base = 249;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_940() << std::endl;
    return 0;
}
