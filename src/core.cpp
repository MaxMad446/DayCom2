// Auto-generated module | 2026-05-12T04:12:30.616665
#include <iostream>
#include <vector>

int compute_843() {
    int base = 241;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_843() << std::endl;
    return 0;
}
