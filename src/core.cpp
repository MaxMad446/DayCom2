// Auto-generated module | 2026-05-14T18:09:17.081564
#include <iostream>
#include <vector>

int compute_244() {
    int base = 363;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_244() << std::endl;
    return 0;
}
