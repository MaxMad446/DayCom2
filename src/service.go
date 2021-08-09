package main

// Auto-generated | 2026-05-12T20:53:08.334838
import "fmt"

func Process_603() int {
    base := 206
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_603())
}
