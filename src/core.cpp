// Auto-generated module | 2026-05-14T18:18:52.495272
#include <iostream>
#include <vector>

int compute_798() {
    int base = 288;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_798() << std::endl;
    return 0;
}
