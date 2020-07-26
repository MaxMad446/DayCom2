// Auto-generated module | 2026-05-11T19:36:31.187007
#include <iostream>
#include <vector>

int compute_698() {
    int base = 393;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_698() << std::endl;
    return 0;
}
