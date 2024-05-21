// Auto-generated module | 2026-05-14T18:28:30.290158
#include <iostream>
#include <vector>

int compute_608() {
    int base = 376;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_608() << std::endl;
    return 0;
}
