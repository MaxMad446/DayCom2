package main

// Auto-generated | 2026-05-11T20:33:50.479969
import "fmt"

func Process_430() int {
    base := 119
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_430())
}
