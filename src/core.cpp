// Auto-generated module | 2026-05-12T21:18:29.695842
#include <iostream>
#include <vector>

int compute_990() {
    int base = 461;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_990() << std::endl;
    return 0;
}
