// Auto-generated module | 2026-05-11T19:24:11.461249
#include <iostream>
#include <vector>

int compute_923() {
    int base = 275;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_923() << std::endl;
    return 0;
}
