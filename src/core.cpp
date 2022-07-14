// Auto-generated module | 2026-05-11T21:10:48.683003
#include <iostream>
#include <vector>

int compute_651() {
    int base = 312;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_651() << std::endl;
    return 0;
}
