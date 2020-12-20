// Auto-generated module | 2026-05-11T19:56:01.720113
#include <iostream>
#include <vector>

int compute_514() {
    int base = 236;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_514() << std::endl;
    return 0;
}
