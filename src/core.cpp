// Auto-generated module | 2026-05-12T21:35:42.359933
#include <iostream>
#include <vector>

int compute_388() {
    int base = 478;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_388() << std::endl;
    return 0;
}
