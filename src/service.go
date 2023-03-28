package main

// Auto-generated | 2026-05-11T21:44:15.419185
import "fmt"

func Process_961() int {
    base := 14
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_961())
}
