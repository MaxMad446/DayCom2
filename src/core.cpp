// Auto-generated module | 2026-05-12T04:36:57.647043
#include <iostream>
#include <vector>

int compute_439() {
    int base = 25;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_439() << std::endl;
    return 0;
}
