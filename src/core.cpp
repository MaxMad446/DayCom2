// Auto-generated module | 2026-05-14T18:25:34.485847
#include <iostream>
#include <vector>

int compute_412() {
    int base = 380;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_412() << std::endl;
    return 0;
}
