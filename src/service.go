package main

// Auto-generated | 2026-05-11T21:43:34.774522
import "fmt"

func Process_350() int {
    base := 400
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_350())
}
