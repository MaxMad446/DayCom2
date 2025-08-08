// Auto-generated module | 2026-05-12T04:21:41.477942
#include <iostream>
#include <vector>

int compute_514() {
    int base = 71;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_514() << std::endl;
    return 0;
}
