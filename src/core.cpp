// Auto-generated module | 2026-05-12T04:24:57.864248
#include <iostream>
#include <vector>

int compute_836() {
    int base = 374;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_836() << std::endl;
    return 0;
}
