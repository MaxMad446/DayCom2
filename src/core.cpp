// Auto-generated module | 2026-05-14T18:11:48.061931
#include <iostream>
#include <vector>

int compute_120() {
    int base = 473;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_120() << std::endl;
    return 0;
}
