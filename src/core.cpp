// Auto-generated module | 2026-05-11T21:21:20.279363
#include <iostream>
#include <vector>

int compute_402() {
    int base = 118;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_402() << std::endl;
    return 0;
}
