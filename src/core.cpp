// Auto-generated module | 2026-05-12T20:59:34.027525
#include <iostream>
#include <vector>

int compute_977() {
    int base = 429;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_977() << std::endl;
    return 0;
}
