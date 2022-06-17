package main

// Auto-generated | 2026-05-11T21:07:12.086056
import "fmt"

func Process_900() int {
    base := 252
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_900())
}
