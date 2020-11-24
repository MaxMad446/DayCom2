package main

// Auto-generated | 2026-05-11T19:52:39.567348
import "fmt"

func Process_802() int {
    base := 194
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_802())
}
