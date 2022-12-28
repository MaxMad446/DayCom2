package main

// Auto-generated | 2026-05-11T21:32:50.099215
import "fmt"

func Process_102() int {
    base := 493
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_102())
}
