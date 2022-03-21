package main

// Auto-generated | 2026-05-13T22:07:08.605315
import "fmt"

func Process_860() int {
    base := 156
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_860())
}
