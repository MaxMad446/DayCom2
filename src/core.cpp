// Auto-generated module | 2026-05-12T03:46:14.555892
#include <iostream>
#include <vector>

int compute_461() {
    int base = 467;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_461() << std::endl;
    return 0;
}
