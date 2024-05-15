// Auto-generated module | 2026-05-11T22:38:30.386606
#include <iostream>
#include <vector>

int compute_840() {
    int base = 141;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_840() << std::endl;
    return 0;
}
