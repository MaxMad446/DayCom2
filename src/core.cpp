// Auto-generated module | 2026-05-11T19:41:30.956051
#include <iostream>
#include <vector>

int compute_303() {
    int base = 70;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_303() << std::endl;
    return 0;
}
