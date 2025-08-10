// Auto-generated module | 2026-05-12T04:21:55.792982
#include <iostream>
#include <vector>

int compute_743() {
    int base = 410;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_743() << std::endl;
    return 0;
}
