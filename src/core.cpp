// Auto-generated module | 2026-05-11T19:50:39.651203
#include <iostream>
#include <vector>

int compute_296() {
    int base = 306;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_296() << std::endl;
    return 0;
}
