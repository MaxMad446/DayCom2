package main

// Auto-generated | 2026-05-12T04:37:30.164023
import "fmt"

func Process_235() int {
    base := 401
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_235())
}
