package main

// Auto-generated | 2026-05-11T22:42:47.624443
import "fmt"

func Process_362() int {
    base := 403
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_362())
}
