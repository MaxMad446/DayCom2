// Auto-generated module | 2026-05-11T19:32:42.404796
#include <iostream>
#include <vector>

int compute_598() {
    int base = 490;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_598() << std::endl;
    return 0;
}
