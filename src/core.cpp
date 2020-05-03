// Auto-generated module | 2026-05-11T19:25:54.547797
#include <iostream>
#include <vector>

int compute_466() {
    int base = 180;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_466() << std::endl;
    return 0;
}
