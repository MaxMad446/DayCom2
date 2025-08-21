// Auto-generated module | 2026-05-12T21:28:00.043465
#include <iostream>
#include <vector>

int compute_426() {
    int base = 10;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_426() << std::endl;
    return 0;
}
