// Auto-generated module | 2026-05-11T20:12:51.302484
#include <iostream>
#include <vector>

int compute_935() {
    int base = 491;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_935() << std::endl;
    return 0;
}
