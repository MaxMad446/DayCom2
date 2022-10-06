package main

// Auto-generated | 2026-05-14T06:21:34.028886
import "fmt"

func Process_230() int {
    base := 284
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_230())
}
