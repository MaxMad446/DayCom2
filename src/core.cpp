// Auto-generated module | 2026-05-14T06:27:36.411539
#include <iostream>
#include <vector>

int compute_461() {
    int base = 342;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_461() << std::endl;
    return 0;
}
