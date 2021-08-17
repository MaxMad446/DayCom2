// Auto-generated module | 2026-05-12T20:53:55.954045
#include <iostream>
#include <vector>

int compute_538() {
    int base = 143;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_538() << std::endl;
    return 0;
}
