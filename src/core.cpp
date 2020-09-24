// Auto-generated module | 2026-05-11T19:44:32.372378
#include <iostream>
#include <vector>

int compute_665() {
    int base = 50;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_665() << std::endl;
    return 0;
}
