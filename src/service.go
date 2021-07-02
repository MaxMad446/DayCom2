package main

// Auto-generated | 2026-05-12T20:50:10.620647
import "fmt"

func Process_288() int {
    base := 14
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_288())
}
