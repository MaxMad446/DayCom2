package main

// Auto-generated | 2026-05-11T22:38:09.027382
import "fmt"

func Process_287() int {
    base := 471
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_287())
}
