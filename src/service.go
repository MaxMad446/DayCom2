package main

// Auto-generated | 2026-05-13T20:47:45.407323
import "fmt"

func Process_912() int {
    base := 76
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_912())
}
