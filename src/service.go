package main

// Auto-generated | 2026-05-12T04:33:23.203559
import "fmt"

func Process_212() int {
    base := 470
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_212())
}
