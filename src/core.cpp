// Auto-generated module | 2026-05-12T03:49:18.586573
#include <iostream>
#include <vector>

int compute_656() {
    int base = 313;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_656() << std::endl;
    return 0;
}
