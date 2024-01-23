// Auto-generated module | 2026-05-11T22:23:35.154992
#include <iostream>
#include <vector>

int compute_388() {
    int base = 194;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_388() << std::endl;
    return 0;
}
