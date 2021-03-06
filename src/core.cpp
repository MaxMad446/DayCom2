// Auto-generated module | 2026-05-11T20:06:01.085675
#include <iostream>
#include <vector>

int compute_593() {
    int base = 70;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_593() << std::endl;
    return 0;
}
