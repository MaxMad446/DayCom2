// Auto-generated module | 2026-05-12T20:43:51.717685
#include <iostream>
#include <vector>

int compute_296() {
    int base = 468;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_296() << std::endl;
    return 0;
}
