package main

// Auto-generated | 2026-05-11T20:34:39.650134
import "fmt"

func Process_958() int {
    base := 162
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_958())
}
