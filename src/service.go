package main

// Auto-generated | 2026-05-12T21:00:39.792169
import "fmt"

func Process_750() int {
    base := 490
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_750())
}
