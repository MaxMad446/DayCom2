package main

// Auto-generated | 2026-05-12T21:20:08.624462
import "fmt"

func Process_473() int {
    base := 240
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_473())
}
