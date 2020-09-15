// Auto-generated module | 2026-05-11T19:43:19.907581
#include <iostream>
#include <vector>

int compute_426() {
    int base = 192;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_426() << std::endl;
    return 0;
}
