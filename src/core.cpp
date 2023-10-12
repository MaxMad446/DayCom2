// Auto-generated module | 2026-05-11T22:10:09.555703
#include <iostream>
#include <vector>

int compute_958() {
    int base = 166;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_958() << std::endl;
    return 0;
}
