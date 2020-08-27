// Auto-generated module | 2026-05-11T19:40:53.478119
#include <iostream>
#include <vector>

int compute_826() {
    int base = 303;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_826() << std::endl;
    return 0;
}
