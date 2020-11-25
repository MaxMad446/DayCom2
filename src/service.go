package main

// Auto-generated | 2026-05-14T18:07:29.456225
import "fmt"

func Process_824() int {
    base := 112
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_824())
}
