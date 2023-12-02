// Auto-generated module | 2026-05-11T22:16:43.519143
#include <iostream>
#include <vector>

int compute_345() {
    int base = 219;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_345() << std::endl;
    return 0;
}
