// Auto-generated module | 2026-05-12T04:44:05.858182
#include <iostream>
#include <vector>

int compute_711() {
    int base = 131;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_711() << std::endl;
    return 0;
}
