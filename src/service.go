package main

// Auto-generated | 2026-05-13T21:00:13.434545
import "fmt"

func Process_944() int {
    base := 158
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_944())
}
