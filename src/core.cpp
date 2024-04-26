// Auto-generated module | 2026-05-14T18:26:30.442616
#include <iostream>
#include <vector>

int compute_437() {
    int base = 363;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_437() << std::endl;
    return 0;
}
