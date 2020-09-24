// Auto-generated module | 2026-05-11T19:44:30.585006
#include <iostream>
#include <vector>

int compute_279() {
    int base = 493;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_279() << std::endl;
    return 0;
}
