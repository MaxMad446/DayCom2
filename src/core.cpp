// Auto-generated module | 2026-05-14T06:17:01.500512
#include <iostream>
#include <vector>

int compute_420() {
    int base = 283;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_420() << std::endl;
    return 0;
}
