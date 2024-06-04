// Auto-generated module | 2026-05-11T22:41:02.553644
#include <iostream>
#include <vector>

int compute_296() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_296() << std::endl;
    return 0;
}
