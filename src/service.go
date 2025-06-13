package main

// Auto-generated | 2026-05-12T04:14:11.057449
import "fmt"

func Process_143() int {
    base := 114
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_143())
}
