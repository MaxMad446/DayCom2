package main

// Auto-generated | 2026-05-13T20:32:20.543587
import "fmt"

func Process_775() int {
    base := 141
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_775())
}
