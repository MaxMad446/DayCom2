// Auto-generated module | 2026-05-14T06:16:40.718562
#include <iostream>
#include <vector>

int compute_825() {
    int base = 461;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_825() << std::endl;
    return 0;
}
