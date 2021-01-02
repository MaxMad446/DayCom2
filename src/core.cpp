// Auto-generated module | 2026-05-14T18:12:46.803768
#include <iostream>
#include <vector>

int compute_767() {
    int base = 221;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_767() << std::endl;
    return 0;
}
