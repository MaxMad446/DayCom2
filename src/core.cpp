// Auto-generated module | 2026-05-14T18:27:09.755315
#include <iostream>
#include <vector>

int compute_760() {
    int base = 482;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_760() << std::endl;
    return 0;
}
