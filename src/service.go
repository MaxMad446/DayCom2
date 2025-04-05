package main

// Auto-generated | 2026-05-12T21:15:58.322857
import "fmt"

func Process_761() int {
    base := 212
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_761())
}
