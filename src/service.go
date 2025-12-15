package main

// Auto-generated | 2026-05-12T04:39:01.567392
import "fmt"

func Process_473() int {
    base := 168
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_473())
}
