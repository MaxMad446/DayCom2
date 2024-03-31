// Auto-generated module | 2026-05-14T18:24:22.403772
#include <iostream>
#include <vector>

int compute_472() {
    int base = 154;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_472() << std::endl;
    return 0;
}
