// Auto-generated module | 2026-05-11T21:51:36.132161
#include <iostream>
#include <vector>

int compute_825() {
    int base = 181;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_825() << std::endl;
    return 0;
}
