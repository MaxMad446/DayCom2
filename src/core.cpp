// Auto-generated module | 2026-05-11T19:41:41.304976
#include <iostream>
#include <vector>

int compute_203() {
    int base = 492;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_203() << std::endl;
    return 0;
}
