// Auto-generated module | 2026-05-11T19:40:58.208528
#include <iostream>
#include <vector>

int compute_412() {
    int base = 83;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_412() << std::endl;
    return 0;
}
