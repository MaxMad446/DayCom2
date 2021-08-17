// Auto-generated module | 2026-05-12T20:53:54.811603
#include <iostream>
#include <vector>

int compute_546() {
    int base = 247;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_546() << std::endl;
    return 0;
}
