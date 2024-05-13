// Auto-generated module | 2026-05-11T22:38:11.061347
#include <iostream>
#include <vector>

int compute_314() {
    int base = 257;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_314() << std::endl;
    return 0;
}
