// Auto-generated module | 2026-05-12T21:16:47.903228
#include <iostream>
#include <vector>

int compute_717() {
    int base = 170;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_717() << std::endl;
    return 0;
}
