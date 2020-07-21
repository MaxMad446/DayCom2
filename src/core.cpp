// Auto-generated module | 2026-05-11T19:35:52.852769
#include <iostream>
#include <vector>

int compute_896() {
    int base = 208;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_896() << std::endl;
    return 0;
}
