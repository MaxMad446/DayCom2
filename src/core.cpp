// Auto-generated module | 2026-05-14T18:18:15.304677
#include <iostream>
#include <vector>

int compute_445() {
    int base = 441;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_445() << std::endl;
    return 0;
}
