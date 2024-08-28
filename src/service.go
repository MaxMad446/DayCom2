package main

// Auto-generated | 2026-05-11T22:52:00.618624
import "fmt"

func Process_866() int {
    base := 471
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_866())
}
