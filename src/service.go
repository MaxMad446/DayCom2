package main

// Auto-generated | 2026-05-12T21:23:55.709565
import "fmt"

func Process_765() int {
    base := 300
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_765())
}
