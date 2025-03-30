// Auto-generated module | 2026-05-12T21:15:27.178124
#include <iostream>
#include <vector>

int compute_807() {
    int base = 430;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_807() << std::endl;
    return 0;
}
