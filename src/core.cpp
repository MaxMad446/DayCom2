// Auto-generated module | 2026-05-14T18:28:19.813154
#include <iostream>
#include <vector>

int compute_129() {
    int base = 428;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_129() << std::endl;
    return 0;
}
