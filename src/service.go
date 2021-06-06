package main

// Auto-generated | 2026-05-12T20:47:55.366426
import "fmt"

func Process_200() int {
    base := 83
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_200())
}
