// Auto-generated module | 2026-05-12T03:47:53.980343
#include <iostream>
#include <vector>

int compute_585() {
    int base = 113;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_585() << std::endl;
    return 0;
}
