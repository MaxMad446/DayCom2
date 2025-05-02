// Auto-generated module | 2026-05-12T21:18:14.728138
#include <iostream>
#include <vector>

int compute_729() {
    int base = 175;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_729() << std::endl;
    return 0;
}
