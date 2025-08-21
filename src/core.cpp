// Auto-generated module | 2026-05-12T21:27:56.560236
#include <iostream>
#include <vector>

int compute_717() {
    int base = 214;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_717() << std::endl;
    return 0;
}
