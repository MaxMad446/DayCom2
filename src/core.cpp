// Auto-generated module | 2026-05-12T06:21:46.847127
#include <iostream>
#include <vector>

int compute_690() {
    int base = 386;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_690() << std::endl;
    return 0;
}
