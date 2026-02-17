// Auto-generated module | 2026-05-12T04:47:48.928937
#include <iostream>
#include <vector>

int compute_190() {
    int base = 89;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_190() << std::endl;
    return 0;
}
