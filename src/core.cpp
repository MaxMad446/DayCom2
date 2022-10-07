// Auto-generated module | 2026-05-11T21:21:58.650565
#include <iostream>
#include <vector>

int compute_836() {
    int base = 34;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_836() << std::endl;
    return 0;
}
