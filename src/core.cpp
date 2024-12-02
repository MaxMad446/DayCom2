// Auto-generated module | 2026-05-12T03:48:55.881305
#include <iostream>
#include <vector>

int compute_906() {
    int base = 225;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_906() << std::endl;
    return 0;
}
