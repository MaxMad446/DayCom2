// Auto-generated module | 2026-05-11T22:09:18.694960
#include <iostream>
#include <vector>

int compute_927() {
    int base = 17;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_927() << std::endl;
    return 0;
}
