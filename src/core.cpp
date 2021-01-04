// Auto-generated module | 2026-05-12T21:31:03.636839
#include <iostream>
#include <vector>

int compute_483() {
    int base = 470;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_483() << std::endl;
    return 0;
}
