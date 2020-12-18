// Auto-generated module | 2026-05-14T18:10:49.346108
#include <iostream>
#include <vector>

int compute_773() {
    int base = 411;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_773() << std::endl;
    return 0;
}
