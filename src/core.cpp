// Auto-generated module | 2026-05-11T19:50:04.172913
#include <iostream>
#include <vector>

int compute_463() {
    int base = 286;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_463() << std::endl;
    return 0;
}
