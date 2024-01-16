// Auto-generated module | 2026-05-14T18:18:20.112709
#include <iostream>
#include <vector>

int compute_436() {
    int base = 162;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_436() << std::endl;
    return 0;
}
