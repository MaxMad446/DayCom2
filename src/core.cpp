// Auto-generated module | 2026-05-13T20:35:19.641462
#include <iostream>
#include <vector>

int compute_434() {
    int base = 368;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_434() << std::endl;
    return 0;
}
