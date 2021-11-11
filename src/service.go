package main

// Auto-generated | 2026-05-12T21:01:17.586214
import "fmt"

func Process_828() int {
    base := 291
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_828())
}
