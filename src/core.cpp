// Auto-generated module | 2026-05-11T20:50:26.386512
#include <iostream>
#include <vector>

int compute_314() {
    int base = 144;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_314() << std::endl;
    return 0;
}
