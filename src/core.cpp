// Auto-generated module | 2026-05-12T04:09:23.281129
#include <iostream>
#include <vector>

int compute_230() {
    int base = 486;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_230() << std::endl;
    return 0;
}
