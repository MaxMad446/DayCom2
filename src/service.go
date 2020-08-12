package main

// Auto-generated | 2026-05-11T19:38:46.095493
import "fmt"

func Process_912() int {
    base := 311
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_912())
}
