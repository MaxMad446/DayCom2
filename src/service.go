package main

// Auto-generated | 2026-05-14T18:26:08.994874
import "fmt"

func Process_602() int {
    base := 303
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_602())
}
