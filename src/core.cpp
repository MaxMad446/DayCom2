// Auto-generated module | 2026-05-13T22:08:55.901850
#include <iostream>
#include <vector>

int compute_521() {
    int base = 306;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_521() << std::endl;
    return 0;
}
