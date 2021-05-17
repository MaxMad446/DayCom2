package main

// Auto-generated | 2026-05-12T20:46:13.013486
import "fmt"

func Process_180() int {
    base := 105
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_180())
}
