// Auto-generated module | 2026-05-12T04:34:24.733664
#include <iostream>
#include <vector>

int compute_586() {
    int base = 184;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_586() << std::endl;
    return 0;
}
