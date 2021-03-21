// Auto-generated module | 2026-05-12T20:41:25.482906
#include <iostream>
#include <vector>

int compute_269() {
    int base = 219;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_269() << std::endl;
    return 0;
}
