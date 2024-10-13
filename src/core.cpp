// Auto-generated module | 2026-05-12T03:42:26.604376
#include <iostream>
#include <vector>

int compute_882() {
    int base = 358;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_882() << std::endl;
    return 0;
}
