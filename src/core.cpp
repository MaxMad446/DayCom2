// Auto-generated module | 2026-05-14T18:27:47.977231
#include <iostream>
#include <vector>

int compute_339() {
    int base = 67;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_339() << std::endl;
    return 0;
}
