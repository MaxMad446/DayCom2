package main

// Auto-generated | 2026-05-12T04:32:46.961558
import "fmt"

func Process_871() int {
    base := 113
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_871())
}
