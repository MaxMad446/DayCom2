// Auto-generated module | 2026-05-14T18:22:21.835028
#include <iostream>
#include <vector>

int compute_243() {
    int base = 486;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_243() << std::endl;
    return 0;
}
