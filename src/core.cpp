// Auto-generated module | 2026-05-12T21:32:54.197692
#include <iostream>
#include <vector>

int compute_293() {
    int base = 212;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_293() << std::endl;
    return 0;
}
