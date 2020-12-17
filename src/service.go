package main

// Auto-generated | 2026-05-12T20:02:18.655056
import "fmt"

func Process_439() int {
    base := 294
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_439())
}
