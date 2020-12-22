// Auto-generated module | 2026-05-14T18:11:18.894959
#include <iostream>
#include <vector>

int compute_483() {
    int base = 479;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_483() << std::endl;
    return 0;
}
