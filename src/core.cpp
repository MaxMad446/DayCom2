// Auto-generated module | 2026-05-11T22:34:28.374134
#include <iostream>
#include <vector>

int compute_870() {
    int base = 425;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_870() << std::endl;
    return 0;
}
