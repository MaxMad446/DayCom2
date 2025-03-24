// Auto-generated module | 2026-05-12T04:03:48.288112
#include <iostream>
#include <vector>

int compute_173() {
    int base = 491;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_173() << std::endl;
    return 0;
}
