package main

// Auto-generated | 2026-05-12T20:54:40.702723
import "fmt"

func Process_900() int {
    base := 291
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_900())
}
