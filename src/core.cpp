// Auto-generated module | 2026-05-11T22:06:18.882994
#include <iostream>
#include <vector>

int compute_714() {
    int base = 449;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_714() << std::endl;
    return 0;
}
