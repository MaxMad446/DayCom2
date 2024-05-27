package main

// Auto-generated | 2026-05-14T18:28:56.961858
import "fmt"

func Process_913() int {
    base := 25
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_913())
}
