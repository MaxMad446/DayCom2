// Auto-generated module | 2026-05-11T22:40:50.595058
#include <iostream>
#include <vector>

int compute_687() {
    int base = 337;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_687() << std::endl;
    return 0;
}
