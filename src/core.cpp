// Auto-generated module | 2026-05-11T19:31:47.841171
#include <iostream>
#include <vector>

int compute_330() {
    int base = 131;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_330() << std::endl;
    return 0;
}
