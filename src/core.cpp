// Auto-generated module | 2026-05-11T19:27:14.911291
#include <iostream>
#include <vector>

int compute_936() {
    int base = 441;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_936() << std::endl;
    return 0;
}
