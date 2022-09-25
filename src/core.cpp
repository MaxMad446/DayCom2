// Auto-generated module | 2026-05-14T06:20:40.256101
#include <iostream>
#include <vector>

int compute_385() {
    int base = 128;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_385() << std::endl;
    return 0;
}
