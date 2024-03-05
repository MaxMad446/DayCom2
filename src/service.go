package main

// Auto-generated | 2026-05-11T22:29:12.329498
import "fmt"

func Process_594() int {
    base := 188
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_594())
}
