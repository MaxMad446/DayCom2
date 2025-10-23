// Auto-generated module | 2026-05-12T04:32:00.060029
#include <iostream>
#include <vector>

int compute_426() {
    int base = 140;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_426() << std::endl;
    return 0;
}
