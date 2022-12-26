package main

// Auto-generated | 2026-05-11T21:32:32.670997
import "fmt"

func Process_831() int {
    base := 367
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_831())
}
