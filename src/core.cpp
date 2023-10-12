// Auto-generated module | 2026-05-11T22:10:08.082981
#include <iostream>
#include <vector>

int compute_466() {
    int base = 315;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_466() << std::endl;
    return 0;
}
