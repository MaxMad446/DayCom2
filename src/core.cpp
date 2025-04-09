// Auto-generated module | 2026-05-12T21:16:20.466938
#include <iostream>
#include <vector>

int compute_130() {
    int base = 153;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_130() << std::endl;
    return 0;
}
