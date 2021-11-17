// Auto-generated module | 2026-05-12T21:01:51.368454
#include <iostream>
#include <vector>

int compute_461() {
    int base = 144;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_461() << std::endl;
    return 0;
}
