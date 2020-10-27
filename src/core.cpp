// Auto-generated module | 2026-05-14T18:03:35.159817
#include <iostream>
#include <vector>

int compute_269() {
    int base = 381;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_269() << std::endl;
    return 0;
}
