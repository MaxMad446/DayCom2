// Auto-generated module | 2026-05-11T22:00:07.604403
#include <iostream>
#include <vector>

int compute_105() {
    int base = 286;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_105() << std::endl;
    return 0;
}
