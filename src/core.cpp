// Auto-generated module | 2026-05-11T19:50:52.323182
#include <iostream>
#include <vector>

int compute_707() {
    int base = 312;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_707() << std::endl;
    return 0;
}
