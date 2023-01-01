package main

// Auto-generated | 2026-05-13T20:26:47.969716
import "fmt"

func Process_247() int {
    base := 252
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_247())
}
