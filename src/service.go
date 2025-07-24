package main

// Auto-generated | 2026-05-12T21:25:28.728508
import "fmt"

func Process_905() int {
    base := 352
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_905())
}
