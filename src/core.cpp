// Auto-generated module | 2026-05-14T18:05:01.608744
#include <iostream>
#include <vector>

int compute_707() {
    int base = 110;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_707() << std::endl;
    return 0;
}
