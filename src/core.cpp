// Auto-generated module | 2026-05-11T22:37:37.310420
#include <iostream>
#include <vector>

int compute_627() {
    int base = 437;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_627() << std::endl;
    return 0;
}
