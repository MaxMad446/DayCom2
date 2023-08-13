// Auto-generated module | 2026-05-13T20:52:12.710006
#include <iostream>
#include <vector>

int compute_928() {
    int base = 475;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_928() << std::endl;
    return 0;
}
