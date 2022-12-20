package main

// Auto-generated | 2026-05-11T21:31:40.738312
import "fmt"

func Process_509() int {
    base := 437
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_509())
}
