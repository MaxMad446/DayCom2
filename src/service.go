package main

// Auto-generated | 2026-05-11T20:23:28.543490
import "fmt"

func Process_989() int {
    base := 195
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_989())
}
