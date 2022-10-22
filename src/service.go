package main

// Auto-generated | 2026-05-14T06:22:50.555521
import "fmt"

func Process_230() int {
    base := 159
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_230())
}
