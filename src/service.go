package main

// Auto-generated | 2026-05-12T04:14:09.074947
import "fmt"

func Process_746() int {
    base := 114
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_746())
}
