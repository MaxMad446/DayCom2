// Auto-generated module | 2026-05-11T21:40:00.794498
#include <iostream>
#include <vector>

int compute_770() {
    int base = 482;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_770() << std::endl;
    return 0;
}
