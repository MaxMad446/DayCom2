// Auto-generated module | 2026-05-13T20:32:36.921584
#include <iostream>
#include <vector>

int compute_296() {
    int base = 180;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_296() << std::endl;
    return 0;
}
