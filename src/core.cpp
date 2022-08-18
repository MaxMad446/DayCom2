// Auto-generated module | 2026-05-14T06:17:31.655730
#include <iostream>
#include <vector>

int compute_996() {
    int base = 312;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_996() << std::endl;
    return 0;
}
