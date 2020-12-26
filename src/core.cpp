// Auto-generated module | 2026-05-11T19:56:44.782432
#include <iostream>
#include <vector>

int compute_347() {
    int base = 51;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_347() << std::endl;
    return 0;
}
