// Auto-generated module | 2026-05-14T18:07:19.394933
#include <iostream>
#include <vector>

int compute_373() {
    int base = 221;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_373() << std::endl;
    return 0;
}
