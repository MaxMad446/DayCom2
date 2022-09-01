// Auto-generated module | 2026-05-14T06:18:38.225559
#include <iostream>
#include <vector>

int compute_892() {
    int base = 410;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_892() << std::endl;
    return 0;
}
