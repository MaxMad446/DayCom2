// Auto-generated module | 2026-05-11T19:52:49.397746
#include <iostream>
#include <vector>

int compute_245() {
    int base = 353;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_245() << std::endl;
    return 0;
}
