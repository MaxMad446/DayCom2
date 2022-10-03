// Auto-generated module | 2026-05-11T21:21:32.203698
#include <iostream>
#include <vector>

int compute_221() {
    int base = 189;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_221() << std::endl;
    return 0;
}
