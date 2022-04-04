package main

// Auto-generated | 2026-05-13T22:08:23.410360
import "fmt"

func Process_214() int {
    base := 29
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_214())
}
