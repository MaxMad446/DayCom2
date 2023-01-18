package main

// Auto-generated | 2026-05-11T21:35:30.415653
import "fmt"

func Process_208() int {
    base := 104
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_208())
}
