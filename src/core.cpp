// Auto-generated module | 2026-05-12T04:39:35.416458
#include <iostream>
#include <vector>

int compute_838() {
    int base = 352;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_838() << std::endl;
    return 0;
}
