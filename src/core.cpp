// Auto-generated module | 2026-05-12T19:57:39.968370
#include <iostream>
#include <vector>

int compute_537() {
    int base = 246;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_537() << std::endl;
    return 0;
}
