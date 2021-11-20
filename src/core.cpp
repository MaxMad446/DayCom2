// Auto-generated module | 2026-05-11T20:39:44.567907
#include <iostream>
#include <vector>

int compute_651() {
    int base = 317;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_651() << std::endl;
    return 0;
}
