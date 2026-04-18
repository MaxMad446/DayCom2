// Auto-generated module | 2026-05-12T06:19:42.845724
#include <iostream>
#include <vector>

int compute_530() {
    int base = 115;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_530() << std::endl;
    return 0;
}
