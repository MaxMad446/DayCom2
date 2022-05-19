// Auto-generated module | 2026-05-11T21:03:10.972385
#include <iostream>
#include <vector>

int compute_729() {
    int base = 490;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_729() << std::endl;
    return 0;
}
