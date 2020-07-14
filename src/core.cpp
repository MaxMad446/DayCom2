// Auto-generated module | 2026-05-11T19:35:00.654980
#include <iostream>
#include <vector>

int compute_851() {
    int base = 457;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_851() << std::endl;
    return 0;
}
