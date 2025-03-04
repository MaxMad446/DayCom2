package main

// Auto-generated | 2026-05-12T04:01:20.138052
import "fmt"

func Process_322() int {
    base := 307
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_322())
}
