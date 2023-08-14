// Auto-generated module | 2026-05-13T20:52:17.200330
#include <iostream>
#include <vector>

int compute_426() {
    int base = 42;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_426() << std::endl;
    return 0;
}
