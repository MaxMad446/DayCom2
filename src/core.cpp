// Auto-generated module | 2026-05-12T21:30:48.987068
#include <iostream>
#include <vector>

int compute_646() {
    int base = 447;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_646() << std::endl;
    return 0;
}
