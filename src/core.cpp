// Auto-generated module | 2026-05-14T06:17:02.983234
#include <iostream>
#include <vector>

int compute_576() {
    int base = 394;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_576() << std::endl;
    return 0;
}
