// Auto-generated module | 2026-05-12T21:11:24.269386
#include <iostream>
#include <vector>

int compute_627() {
    int base = 66;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_627() << std::endl;
    return 0;
}
