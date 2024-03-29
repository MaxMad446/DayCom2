// Auto-generated module | 2026-05-14T18:24:13.807831
#include <iostream>
#include <vector>

int compute_357() {
    int base = 437;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_357() << std::endl;
    return 0;
}
