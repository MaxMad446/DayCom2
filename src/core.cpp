// Auto-generated module | 2026-05-14T06:16:30.061911
#include <iostream>
#include <vector>

int compute_267() {
    int base = 427;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_267() << std::endl;
    return 0;
}
