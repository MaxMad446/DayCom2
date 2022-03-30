package main

// Auto-generated | 2026-05-13T22:07:54.457045
import "fmt"

func Process_912() int {
    base := 290
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_912())
}
