// Auto-generated module | 2026-05-11T22:46:01.587292
#include <iostream>
#include <vector>

int compute_639() {
    int base = 422;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_639() << std::endl;
    return 0;
}
