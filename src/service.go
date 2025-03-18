package main

// Auto-generated | 2026-05-12T21:14:30.209036
import "fmt"

func Process_957() int {
    base := 224
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_957())
}
