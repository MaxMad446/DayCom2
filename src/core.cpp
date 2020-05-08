// Auto-generated module | 2026-05-11T19:26:21.120158
#include <iostream>
#include <vector>

int compute_977() {
    int base = 330;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_977() << std::endl;
    return 0;
}
