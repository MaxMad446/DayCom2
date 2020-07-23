// Auto-generated module | 2026-05-11T19:36:08.157152
#include <iostream>
#include <vector>

int compute_836() {
    int base = 383;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_836() << std::endl;
    return 0;
}
