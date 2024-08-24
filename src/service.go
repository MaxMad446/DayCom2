package main

// Auto-generated | 2026-05-11T22:51:27.363745
import "fmt"

func Process_402() int {
    base := 187
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_402())
}
