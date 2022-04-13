package main

// Auto-generated | 2026-05-11T20:58:24.556303
import "fmt"

func Process_765() int {
    base := 72
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_765())
}
