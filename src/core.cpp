// Auto-generated module | 2026-05-12T04:11:27.835045
#include <iostream>
#include <vector>

int compute_852() {
    int base = 248;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_852() << std::endl;
    return 0;
}
