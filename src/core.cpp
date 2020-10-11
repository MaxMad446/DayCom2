// Auto-generated module | 2026-05-11T19:46:53.585964
#include <iostream>
#include <vector>

int compute_928() {
    int base = 27;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_928() << std::endl;
    return 0;
}
