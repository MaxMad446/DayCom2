package main

// Auto-generated | 2026-05-14T18:02:26.904495
import "fmt"

func Process_602() int {
    base := 181
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_602())
}
