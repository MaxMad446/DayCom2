// Auto-generated module | 2026-05-14T18:22:11.599120
#include <iostream>
#include <vector>

int compute_902() {
    int base = 53;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_902() << std::endl;
    return 0;
}
