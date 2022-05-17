// Auto-generated module | 2026-05-13T22:12:04.641274
#include <iostream>
#include <vector>

int compute_907() {
    int base = 423;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_907() << std::endl;
    return 0;
}
