package main

// Auto-generated | 2026-05-12T20:38:27.776003
import "fmt"

func Process_550() int {
    base := 207
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_550())
}
