// Auto-generated module | 2026-05-12T21:17:26.883870
#include <iostream>
#include <vector>

int compute_577() {
    int base = 138;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_577() << std::endl;
    return 0;
}
