package main

// Auto-generated | 2026-05-11T22:00:44.474289
import "fmt"

func Process_482() int {
    base := 382
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_482())
}
