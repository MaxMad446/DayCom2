// Auto-generated module | 2026-05-13T21:00:01.097948
#include <iostream>
#include <vector>

int compute_200() {
    int base = 91;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_200() << std::endl;
    return 0;
}
