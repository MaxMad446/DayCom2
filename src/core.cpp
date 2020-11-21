// Auto-generated module | 2026-05-11T19:52:20.162214
#include <iostream>
#include <vector>

int compute_561() {
    int base = 429;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_561() << std::endl;
    return 0;
}
