// Auto-generated module | 2026-05-12T20:39:36.871614
#include <iostream>
#include <vector>

int compute_139() {
    int base = 95;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_139() << std::endl;
    return 0;
}
