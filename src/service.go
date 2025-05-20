package main

// Auto-generated | 2026-05-12T21:19:47.156806
import "fmt"

func Process_160() int {
    base := 375
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_160())
}
