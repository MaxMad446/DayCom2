// Auto-generated module | 2026-05-12T21:25:41.452919
#include <iostream>
#include <vector>

int compute_419() {
    int base = 449;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_419() << std::endl;
    return 0;
}
