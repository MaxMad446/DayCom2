// Auto-generated module | 2026-05-11T19:34:15.268915
#include <iostream>
#include <vector>

int compute_576() {
    int base = 302;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_576() << std::endl;
    return 0;
}
