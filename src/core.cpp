// Auto-generated module | 2026-05-12T04:33:33.173978
#include <iostream>
#include <vector>

int compute_314() {
    int base = 493;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_314() << std::endl;
    return 0;
}
