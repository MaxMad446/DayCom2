// Auto-generated module | 2026-05-12T03:59:17.541090
#include <iostream>
#include <vector>

int compute_483() {
    int base = 486;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_483() << std::endl;
    return 0;
}
