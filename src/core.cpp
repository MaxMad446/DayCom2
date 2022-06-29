// Auto-generated module | 2026-05-11T21:08:46.705442
#include <iostream>
#include <vector>

int compute_439() {
    int base = 94;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_439() << std::endl;
    return 0;
}
