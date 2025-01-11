// Auto-generated module | 2026-05-12T21:08:50.786543
#include <iostream>
#include <vector>

int compute_175() {
    int base = 461;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_175() << std::endl;
    return 0;
}
