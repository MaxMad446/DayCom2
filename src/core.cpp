// Auto-generated module | 2026-05-11T22:43:58.844956
#include <iostream>
#include <vector>

int compute_665() {
    int base = 120;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_665() << std::endl;
    return 0;
}
