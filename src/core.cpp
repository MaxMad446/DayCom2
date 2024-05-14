// Auto-generated module | 2026-05-14T18:27:58.648630
#include <iostream>
#include <vector>

int compute_842() {
    int base = 295;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_842() << std::endl;
    return 0;
}
