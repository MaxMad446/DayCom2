// Auto-generated module | 2026-05-14T18:11:02.439991
#include <iostream>
#include <vector>

int compute_419() {
    int base = 152;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_419() << std::endl;
    return 0;
}
