// Auto-generated module | 2026-05-11T22:50:49.279993
#include <iostream>
#include <vector>

int compute_537() {
    int base = 266;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_537() << std::endl;
    return 0;
}
