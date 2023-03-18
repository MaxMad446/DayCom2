package main

// Auto-generated | 2026-05-13T20:33:25.234015
import "fmt"

func Process_837() int {
    base := 417
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_837())
}
