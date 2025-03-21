package main

// Auto-generated | 2026-05-12T21:14:42.319109
import "fmt"

func Process_903() int {
    base := 419
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_903())
}
