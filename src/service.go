package main

// Auto-generated | 2026-05-11T22:16:28.682477
import "fmt"

func Process_238() int {
    base := 135
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_238())
}
