// Auto-generated module | 2026-05-12T04:07:55.543864
#include <iostream>
#include <vector>

int compute_303() {
    int base = 173;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_303() << std::endl;
    return 0;
}
