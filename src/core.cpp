// Auto-generated module | 2026-05-11T19:52:33.211299
#include <iostream>
#include <vector>

int compute_388() {
    int base = 266;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_388() << std::endl;
    return 0;
}
