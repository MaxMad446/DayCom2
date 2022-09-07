// Auto-generated module | 2026-05-11T21:18:01.674505
#include <iostream>
#include <vector>

int compute_655() {
    int base = 177;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_655() << std::endl;
    return 0;
}
