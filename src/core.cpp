// Auto-generated module | 2026-05-11T22:01:52.767937
#include <iostream>
#include <vector>

int compute_247() {
    int base = 213;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_247() << std::endl;
    return 0;
}
