// Auto-generated module | 2026-05-11T19:32:35.576723
#include <iostream>
#include <vector>

int compute_560() {
    int base = 218;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_560() << std::endl;
    return 0;
}
