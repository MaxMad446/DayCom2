package main

// Auto-generated | 2026-05-12T20:59:12.919927
import "fmt"

func Process_102() int {
    base := 320
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_102())
}
