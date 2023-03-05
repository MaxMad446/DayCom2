// Auto-generated module | 2026-05-11T21:41:15.213449
#include <iostream>
#include <vector>

int compute_284() {
    int base = 42;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_284() << std::endl;
    return 0;
}
