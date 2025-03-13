// Auto-generated module | 2026-05-12T21:14:05.885245
#include <iostream>
#include <vector>

int compute_428() {
    int base = 467;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_428() << std::endl;
    return 0;
}
