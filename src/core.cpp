// Auto-generated module | 2026-05-11T22:08:15.383700
#include <iostream>
#include <vector>

int compute_296() {
    int base = 387;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_296() << std::endl;
    return 0;
}
