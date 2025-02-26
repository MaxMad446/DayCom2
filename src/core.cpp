// Auto-generated module | 2026-05-12T21:12:53.543034
#include <iostream>
#include <vector>

int compute_630() {
    int base = 54;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_630() << std::endl;
    return 0;
}
