// Auto-generated module | 2026-05-11T22:45:17.865649
#include <iostream>
#include <vector>

int compute_158() {
    int base = 214;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_158() << std::endl;
    return 0;
}
