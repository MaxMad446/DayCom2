package main

// Auto-generated | 2026-05-12T03:40:29.439127
import "fmt"

func Process_238() int {
    base := 194
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_238())
}
