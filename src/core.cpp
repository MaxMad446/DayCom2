// Auto-generated module | 2026-05-11T22:41:20.488932
#include <iostream>
#include <vector>

int compute_927() {
    int base = 421;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_927() << std::endl;
    return 0;
}
