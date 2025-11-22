// Auto-generated module | 2026-05-12T04:35:47.378908
#include <iostream>
#include <vector>

int compute_992() {
    int base = 135;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_992() << std::endl;
    return 0;
}
