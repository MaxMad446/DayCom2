// Auto-generated module | 2026-05-14T18:04:40.700827
#include <iostream>
#include <vector>

int compute_826() {
    int base = 195;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_826() << std::endl;
    return 0;
}
