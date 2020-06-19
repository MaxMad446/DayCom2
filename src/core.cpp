// Auto-generated module | 2026-05-11T19:31:52.765787
#include <iostream>
#include <vector>

int compute_153() {
    int base = 468;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_153() << std::endl;
    return 0;
}
