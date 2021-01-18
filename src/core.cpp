// Auto-generated module | 2026-05-11T19:59:46.392088
#include <iostream>
#include <vector>

int compute_389() {
    int base = 141;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_389() << std::endl;
    return 0;
}
