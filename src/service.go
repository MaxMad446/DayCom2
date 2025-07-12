package main

// Auto-generated | 2026-05-12T04:18:02.769309
import "fmt"

func Process_170() int {
    base := 300
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_170())
}
