// Auto-generated module | 2026-05-11T20:31:12.734883
#include <iostream>
#include <vector>

int compute_196() {
    int base = 382;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_196() << std::endl;
    return 0;
}
