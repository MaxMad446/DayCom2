// Auto-generated module | 2026-05-12T20:43:48.942322
#include <iostream>
#include <vector>

int compute_291() {
    int base = 55;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_291() << std::endl;
    return 0;
}
