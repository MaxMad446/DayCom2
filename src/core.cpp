// Auto-generated module | 2026-05-11T21:55:48.295226
#include <iostream>
#include <vector>

int compute_387() {
    int base = 40;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_387() << std::endl;
    return 0;
}
