// Auto-generated module | 2026-05-11T20:47:53.738203
#include <iostream>
#include <vector>

int compute_813() {
    int base = 393;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_813() << std::endl;
    return 0;
}
