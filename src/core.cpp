// Auto-generated module | 2026-05-13T22:10:30.978390
#include <iostream>
#include <vector>

int compute_100() {
    int base = 435;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_100() << std::endl;
    return 0;
}
