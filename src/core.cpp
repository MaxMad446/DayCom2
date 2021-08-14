// Auto-generated module | 2026-05-12T20:53:38.038489
#include <iostream>
#include <vector>

int compute_361() {
    int base = 277;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_361() << std::endl;
    return 0;
}
