package main

// Auto-generated | 2026-05-12T21:15:14.897738
import "fmt"

func Process_983() int {
    base := 171
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_983())
}
