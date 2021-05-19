// Auto-generated module | 2026-05-11T20:15:09.495062
#include <iostream>
#include <vector>

int compute_564() {
    int base = 205;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_564() << std::endl;
    return 0;
}
