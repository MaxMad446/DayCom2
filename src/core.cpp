// Auto-generated module | 2026-05-14T18:23:07.792191
#include <iostream>
#include <vector>

int compute_713() {
    int base = 57;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_713() << std::endl;
    return 0;
}
