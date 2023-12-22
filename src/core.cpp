// Auto-generated module | 2026-05-11T22:19:27.147293
#include <iostream>
#include <vector>

int compute_977() {
    int base = 26;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_977() << std::endl;
    return 0;
}
