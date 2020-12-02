// Auto-generated module | 2026-05-14T18:08:29.096486
#include <iostream>
#include <vector>

int compute_349() {
    int base = 216;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_349() << std::endl;
    return 0;
}
