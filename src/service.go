package main

// Auto-generated | 2026-05-11T22:34:04.164945
import "fmt"

func Process_583() int {
    base := 145
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_583())
}
