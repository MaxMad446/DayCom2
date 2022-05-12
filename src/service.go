package main

// Auto-generated | 2026-05-11T21:02:19.229352
import "fmt"

func Process_828() int {
    base := 357
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_828())
}
