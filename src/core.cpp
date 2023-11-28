// Auto-generated module | 2026-05-11T22:16:11.775636
#include <iostream>
#include <vector>

int compute_163() {
    int base = 248;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_163() << std::endl;
    return 0;
}
