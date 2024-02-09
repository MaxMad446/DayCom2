// Auto-generated module | 2026-05-14T18:20:23.744605
#include <iostream>
#include <vector>

int compute_730() {
    int base = 437;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_730() << std::endl;
    return 0;
}
