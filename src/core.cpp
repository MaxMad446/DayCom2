// Auto-generated module | 2026-05-11T20:58:52.296956
#include <iostream>
#include <vector>

int compute_882() {
    int base = 114;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_882() << std::endl;
    return 0;
}
