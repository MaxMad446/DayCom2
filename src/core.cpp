// Auto-generated module | 2026-05-11T22:23:33.547566
#include <iostream>
#include <vector>

int compute_904() {
    int base = 249;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_904() << std::endl;
    return 0;
}
