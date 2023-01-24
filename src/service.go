package main

// Auto-generated | 2026-05-13T20:28:46.308695
import "fmt"

func Process_402() int {
    base := 193
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_402())
}
