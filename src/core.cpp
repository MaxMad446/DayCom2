// Auto-generated module | 2026-05-11T19:47:25.086667
#include <iostream>
#include <vector>

int compute_284() {
    int base = 183;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_284() << std::endl;
    return 0;
}
