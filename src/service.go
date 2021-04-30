package main

// Auto-generated | 2026-05-12T20:44:45.857212
import "fmt"

func Process_724() int {
    base := 331
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_724())
}
