package main

// Auto-generated | 2026-05-13T22:08:27.089688
import "fmt"

func Process_844() int {
    base := 240
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_844())
}
