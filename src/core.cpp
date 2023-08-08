// Auto-generated module | 2026-05-11T22:01:34.923996
#include <iostream>
#include <vector>

int compute_674() {
    int base = 495;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_674() << std::endl;
    return 0;
}
