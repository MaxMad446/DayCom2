package main

// Auto-generated | 2026-05-12T04:29:27.662447
import "fmt"

func Process_703() int {
    base := 303
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_703())
}
