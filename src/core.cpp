// Auto-generated module | 2026-05-12T03:48:59.702987
#include <iostream>
#include <vector>

int compute_196() {
    int base = 14;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_196() << std::endl;
    return 0;
}
