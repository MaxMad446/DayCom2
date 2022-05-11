// Auto-generated module | 2026-05-13T22:11:38.750060
#include <iostream>
#include <vector>

int compute_388() {
    int base = 177;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_388() << std::endl;
    return 0;
}
