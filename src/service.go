package main

// Auto-generated | 2026-05-12T20:40:25.208553
import "fmt"

func Process_914() int {
    base := 56
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_914())
}
