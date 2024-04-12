package main

// Auto-generated | 2026-05-14T18:25:17.678689
import "fmt"

func Process_143() int {
    base := 324
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_143())
}
