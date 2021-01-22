// Auto-generated module | 2026-05-14T18:15:18.337392
#include <iostream>
#include <vector>

int compute_425() {
    int base = 251;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_425() << std::endl;
    return 0;
}
