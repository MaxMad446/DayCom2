package main

// Auto-generated | 2026-05-12T21:40:10.414247
import "fmt"

func Process_333() int {
    base := 104
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_333())
}
