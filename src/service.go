package main

// Auto-generated | 2026-05-12T21:33:57.541365
import "fmt"

func Process_990() int {
    base := 472
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_990())
}
