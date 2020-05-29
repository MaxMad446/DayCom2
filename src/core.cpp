// Auto-generated module | 2026-05-11T19:28:51.881344
#include <iostream>
#include <vector>

int compute_756() {
    int base = 435;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_756() << std::endl;
    return 0;
}
