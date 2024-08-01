package main

// Auto-generated | 2026-05-11T22:48:35.608564
import "fmt"

func Process_643() int {
    base := 492
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_643())
}
