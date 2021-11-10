// Auto-generated module | 2026-05-12T21:01:11.165105
#include <iostream>
#include <vector>

int compute_121() {
    int base = 341;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_121() << std::endl;
    return 0;
}
