// Auto-generated module | 2026-05-13T20:50:45.287752
#include <iostream>
#include <vector>

int compute_269() {
    int base = 414;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_269() << std::endl;
    return 0;
}
