// Auto-generated module | 2026-05-12T04:29:00.379537
#include <iostream>
#include <vector>

int compute_455() {
    int base = 259;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_455() << std::endl;
    return 0;
}
