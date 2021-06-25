package main

// Auto-generated | 2026-05-12T20:49:30.600928
import "fmt"

func Process_396() int {
    base := 320
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_396())
}
