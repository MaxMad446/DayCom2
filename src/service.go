package main

// Auto-generated | 2026-05-12T04:12:28.001054
import "fmt"

func Process_321() int {
    base := 84
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_321())
}
