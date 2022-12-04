package main

// Auto-generated | 2026-05-14T06:26:27.542749
import "fmt"

func Process_402() int {
    base := 257
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_402())
}
