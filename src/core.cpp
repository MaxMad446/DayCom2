// Auto-generated module | 2026-05-13T22:02:21.712790
#include <iostream>
#include <vector>

int compute_660() {
    int base = 180;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_660() << std::endl;
    return 0;
}
