// Auto-generated module | 2026-05-13T20:38:55.205737
#include <iostream>
#include <vector>

int compute_500() {
    int base = 58;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_500() << std::endl;
    return 0;
}
