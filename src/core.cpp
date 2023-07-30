// Auto-generated module | 2026-05-11T22:00:22.223701
#include <iostream>
#include <vector>

int compute_904() {
    int base = 395;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_904() << std::endl;
    return 0;
}
