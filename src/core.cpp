// Auto-generated module | 2026-05-14T18:13:05.184309
#include <iostream>
#include <vector>

int compute_728() {
    int base = 147;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_728() << std::endl;
    return 0;
}
