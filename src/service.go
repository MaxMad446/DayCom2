package main

// Auto-generated | 2026-05-12T03:45:09.142262
import "fmt"

func Process_761() int {
    base := 101
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_761())
}
