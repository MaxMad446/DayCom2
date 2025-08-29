// Auto-generated module | 2026-05-12T04:24:33.132201
#include <iostream>
#include <vector>

int compute_279() {
    int base = 450;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_279() << std::endl;
    return 0;
}
