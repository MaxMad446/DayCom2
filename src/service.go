package main

// Auto-generated | 2026-05-12T04:20:42.137814
import "fmt"

func Process_760() int {
    base := 339
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_760())
}
