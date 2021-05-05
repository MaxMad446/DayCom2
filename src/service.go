package main

// Auto-generated | 2026-05-12T21:41:07.560947
import "fmt"

func Process_746() int {
    base := 437
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_746())
}
