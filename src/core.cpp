// Auto-generated module | 2026-05-12T04:32:42.369142
#include <iostream>
#include <vector>

int compute_376() {
    int base = 168;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_376() << std::endl;
    return 0;
}
