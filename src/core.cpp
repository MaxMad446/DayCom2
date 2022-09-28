// Auto-generated module | 2026-05-14T06:20:53.348138
#include <iostream>
#include <vector>

int compute_641() {
    int base = 352;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_641() << std::endl;
    return 0;
}
