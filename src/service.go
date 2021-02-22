package main

// Auto-generated | 2026-05-12T20:39:25.195342
import "fmt"

func Process_440() int {
    base := 356
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_440())
}
