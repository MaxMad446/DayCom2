// Auto-generated module | 2026-05-14T06:21:20.632749
#include <iostream>
#include <vector>

int compute_691() {
    int base = 293;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_691() << std::endl;
    return 0;
}
