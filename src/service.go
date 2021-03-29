package main

// Auto-generated | 2026-05-11T20:08:47.418048
import "fmt"

func Process_987() int {
    base := 165
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_987())
}
