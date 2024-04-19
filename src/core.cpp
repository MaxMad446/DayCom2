// Auto-generated module | 2026-05-14T18:25:57.947663
#include <iostream>
#include <vector>

int compute_472() {
    int base = 408;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_472() << std::endl;
    return 0;
}
