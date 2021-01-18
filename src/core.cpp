// Auto-generated module | 2026-05-11T19:59:47.524627
#include <iostream>
#include <vector>

int compute_227() {
    int base = 48;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_227() << std::endl;
    return 0;
}
