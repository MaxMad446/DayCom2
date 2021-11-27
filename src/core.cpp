// Auto-generated module | 2026-05-11T20:40:44.822993
#include <iostream>
#include <vector>

int compute_900() {
    int base = 476;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_900() << std::endl;
    return 0;
}
