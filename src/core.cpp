// Auto-generated module | 2026-05-14T18:24:57.507638
#include <iostream>
#include <vector>

int compute_362() {
    int base = 484;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_362() << std::endl;
    return 0;
}
