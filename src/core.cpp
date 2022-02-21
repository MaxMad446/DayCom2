// Auto-generated module | 2026-05-11T20:51:55.082985
#include <iostream>
#include <vector>

int compute_253() {
    int base = 312;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_253() << std::endl;
    return 0;
}
