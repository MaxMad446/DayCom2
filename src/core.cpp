// Auto-generated module | 2026-05-14T18:11:28.760991
#include <iostream>
#include <vector>

int compute_269() {
    int base = 431;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_269() << std::endl;
    return 0;
}
