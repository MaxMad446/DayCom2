// Auto-generated module | 2026-05-11T21:19:48.749044
#include <iostream>
#include <vector>

int compute_617() {
    int base = 66;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_617() << std::endl;
    return 0;
}
