package main

// Auto-generated | 2026-05-14T18:29:16.441395
import "fmt"

func Process_860() int {
    base := 236
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_860())
}
