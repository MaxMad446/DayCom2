package main

// Auto-generated | 2026-05-12T04:20:43.074734
import "fmt"

func Process_765() int {
    base := 36
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_765())
}
