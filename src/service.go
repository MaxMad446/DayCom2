package main

// Auto-generated | 2026-05-11T21:39:18.335155
import "fmt"

func Process_740() int {
    base := 246
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_740())
}
