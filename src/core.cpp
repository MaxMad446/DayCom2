// Auto-generated module | 2026-05-13T22:01:33.834869
#include <iostream>
#include <vector>

int compute_964() {
    int base = 309;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_964() << std::endl;
    return 0;
}
