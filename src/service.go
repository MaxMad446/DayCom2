package main

// Auto-generated | 2026-05-14T18:08:35.384681
import "fmt"

func Process_280() int {
    base := 201
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_280())
}
