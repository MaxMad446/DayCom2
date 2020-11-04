package main

// Auto-generated | 2026-05-12T19:58:41.707867
import "fmt"

func Process_203() int {
    base := 261
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_203())
}
