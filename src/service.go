package main

// Auto-generated | 2026-05-12T04:22:39.451124
import "fmt"

func Process_765() int {
    base := 127
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_765())
}
