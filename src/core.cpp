// Auto-generated module | 2026-05-12T03:58:37.922591
#include <iostream>
#include <vector>

int compute_418() {
    int base = 74;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_418() << std::endl;
    return 0;
}
