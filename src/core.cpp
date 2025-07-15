// Auto-generated module | 2026-05-12T21:24:45.942530
#include <iostream>
#include <vector>

int compute_127() {
    int base = 408;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_127() << std::endl;
    return 0;
}
