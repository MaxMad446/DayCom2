// Auto-generated module | 2026-05-14T18:14:31.339872
#include <iostream>
#include <vector>

int compute_461() {
    int base = 203;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_461() << std::endl;
    return 0;
}
