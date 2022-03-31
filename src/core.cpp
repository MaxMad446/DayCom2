// Auto-generated module | 2026-05-11T20:56:44.407767
#include <iostream>
#include <vector>

int compute_955() {
    int base = 46;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_955() << std::endl;
    return 0;
}
