// Auto-generated module | 2026-05-12T04:31:01.161755
#include <iostream>
#include <vector>

int compute_230() {
    int base = 70;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_230() << std::endl;
    return 0;
}
