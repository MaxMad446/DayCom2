// Auto-generated module | 2026-05-12T03:44:32.506247
#include <iostream>
#include <vector>

int compute_687() {
    int base = 395;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_687() << std::endl;
    return 0;
}
