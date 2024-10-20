package main

// Auto-generated | 2026-05-12T03:43:22.607236
import "fmt"

func Process_765() int {
    base := 199
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_765())
}
