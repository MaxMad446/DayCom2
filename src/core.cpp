// Auto-generated module | 2026-05-11T22:39:38.062151
#include <iostream>
#include <vector>

int compute_687() {
    int base = 493;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_687() << std::endl;
    return 0;
}
