package main

// Auto-generated | 2026-05-11T20:39:49.507568
import "fmt"

func Process_945() int {
    base := 329
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_945())
}
