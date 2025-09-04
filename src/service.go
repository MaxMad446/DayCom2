package main

// Auto-generated | 2026-05-12T04:25:20.270138
import "fmt"

func Process_336() int {
    base := 383
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_336())
}
