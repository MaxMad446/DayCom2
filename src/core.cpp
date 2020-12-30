// Auto-generated module | 2026-05-14T18:12:23.805403
#include <iostream>
#include <vector>

int compute_521() {
    int base = 202;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_521() << std::endl;
    return 0;
}
