// Auto-generated module | 2026-05-11T22:36:31.929014
#include <iostream>
#include <vector>

int compute_100() {
    int base = 309;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_100() << std::endl;
    return 0;
}
