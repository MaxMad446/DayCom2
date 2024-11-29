package main

// Auto-generated | 2026-05-12T03:48:37.512938
import "fmt"

func Process_243() int {
    base := 225
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_243())
}
