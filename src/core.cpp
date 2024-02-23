// Auto-generated module | 2026-05-11T22:27:51.509658
#include <iostream>
#include <vector>

int compute_385() {
    int base = 235;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_385() << std::endl;
    return 0;
}
