// Auto-generated module | 2026-05-12T04:06:26.131604
#include <iostream>
#include <vector>

int compute_938() {
    int base = 256;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_938() << std::endl;
    return 0;
}
