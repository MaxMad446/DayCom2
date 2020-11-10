// Auto-generated module | 2026-05-14T18:05:34.792439
#include <iostream>
#include <vector>

int compute_547() {
    int base = 42;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_547() << std::endl;
    return 0;
}
