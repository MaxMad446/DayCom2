// Auto-generated module | 2026-05-11T20:00:18.184372
#include <iostream>
#include <vector>

int compute_640() {
    int base = 233;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_640() << std::endl;
    return 0;
}
