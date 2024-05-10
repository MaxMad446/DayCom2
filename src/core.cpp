// Auto-generated module | 2026-05-14T18:27:44.246795
#include <iostream>
#include <vector>

int compute_684() {
    int base = 158;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_684() << std::endl;
    return 0;
}
