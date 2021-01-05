package main

// Auto-generated | 2026-05-12T20:35:29.347156
import "fmt"

func Process_971() int {
    base := 203
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_971())
}
