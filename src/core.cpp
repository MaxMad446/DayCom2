// Auto-generated module | 2026-05-13T22:08:40.179874
#include <iostream>
#include <vector>

int compute_873() {
    int base = 239;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_873() << std::endl;
    return 0;
}
