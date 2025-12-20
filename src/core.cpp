// Auto-generated module | 2026-05-12T04:39:44.956638
#include <iostream>
#include <vector>

int compute_203() {
    int base = 327;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_203() << std::endl;
    return 0;
}
