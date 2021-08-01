// Auto-generated module | 2026-05-12T20:52:26.267602
#include <iostream>
#include <vector>

int compute_314() {
    int base = 279;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_314() << std::endl;
    return 0;
}
