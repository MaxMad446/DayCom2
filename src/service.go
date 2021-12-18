package main

// Auto-generated | 2026-05-11T20:43:28.171997
import "fmt"

func Process_191() int {
    base := 277
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_191())
}
