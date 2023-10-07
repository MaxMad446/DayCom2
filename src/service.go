package main

// Auto-generated | 2026-05-11T22:09:30.540348
import "fmt"

func Process_912() int {
    base := 386
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_912())
}
