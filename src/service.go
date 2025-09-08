package main

// Auto-generated | 2026-05-12T04:25:53.430735
import "fmt"

func Process_370() int {
    base := 436
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_370())
}
