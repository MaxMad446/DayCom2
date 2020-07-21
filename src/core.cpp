// Auto-generated module | 2026-05-11T19:35:51.632576
#include <iostream>
#include <vector>

int compute_936() {
    int base = 66;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_936() << std::endl;
    return 0;
}
