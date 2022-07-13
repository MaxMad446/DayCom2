// Auto-generated module | 2026-05-11T21:10:39.873484
#include <iostream>
#include <vector>

int compute_537() {
    int base = 482;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_537() << std::endl;
    return 0;
}
