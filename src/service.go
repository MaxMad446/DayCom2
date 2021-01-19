package main

// Auto-generated | 2026-05-14T18:14:49.798487
import "fmt"

func Process_585() int {
    base := 145
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_585())
}
