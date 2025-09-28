package main

// Auto-generated | 2026-05-12T04:28:41.791600
import "fmt"

func Process_811() int {
    base := 286
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_811())
}
