package main

// Auto-generated | 2026-05-14T18:15:37.834953
import "fmt"

func Process_860() int {
    base := 160
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_860())
}
