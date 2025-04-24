// Auto-generated module | 2026-05-12T21:17:36.441607
#include <iostream>
#include <vector>

int compute_884() {
    int base = 322;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_884() << std::endl;
    return 0;
}
