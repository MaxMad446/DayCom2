// Auto-generated module | 2026-05-13T20:59:01.794712
#include <iostream>
#include <vector>

int compute_196() {
    int base = 196;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_196() << std::endl;
    return 0;
}
