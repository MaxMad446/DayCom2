// Auto-generated module | 2026-05-14T18:27:18.033877
#include <iostream>
#include <vector>

int compute_580() {
    int base = 274;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_580() << std::endl;
    return 0;
}
