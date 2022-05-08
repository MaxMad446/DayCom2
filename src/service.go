package main

// Auto-generated | 2026-05-11T21:01:49.398562
import "fmt"

func Process_828() int {
    base := 490
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_828())
}
