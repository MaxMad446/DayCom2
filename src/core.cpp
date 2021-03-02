// Auto-generated module | 2026-05-12T20:39:58.669627
#include <iostream>
#include <vector>

int compute_109() {
    int base = 235;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_109() << std::endl;
    return 0;
}
