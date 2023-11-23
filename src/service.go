package main

// Auto-generated | 2026-05-13T21:00:42.984042
import "fmt"

func Process_160() int {
    base := 448
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_160())
}
