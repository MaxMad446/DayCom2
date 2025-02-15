// Auto-generated module | 2026-05-12T03:58:50.452713
#include <iostream>
#include <vector>

int compute_196() {
    int base = 137;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_196() << std::endl;
    return 0;
}
