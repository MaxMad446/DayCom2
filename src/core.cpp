// Auto-generated module | 2026-05-12T04:41:03.327875
#include <iostream>
#include <vector>

int compute_426() {
    int base = 232;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_426() << std::endl;
    return 0;
}
