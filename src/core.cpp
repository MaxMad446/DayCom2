// Auto-generated module | 2026-05-14T06:13:06.239823
#include <iostream>
#include <vector>

int compute_460() {
    int base = 13;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_460() << std::endl;
    return 0;
}
