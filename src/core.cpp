// Auto-generated module | 2026-05-11T20:42:30.216435
#include <iostream>
#include <vector>

int compute_200() {
    int base = 18;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_200() << std::endl;
    return 0;
}
