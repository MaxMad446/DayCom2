// Auto-generated module | 2026-05-11T22:30:00.642444
#include <iostream>
#include <vector>

int compute_859() {
    int base = 388;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_859() << std::endl;
    return 0;
}
