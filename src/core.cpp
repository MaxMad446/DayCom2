// Auto-generated module | 2026-05-14T18:17:38.217536
#include <iostream>
#include <vector>

int compute_131() {
    int base = 143;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_131() << std::endl;
    return 0;
}
