package main

// Auto-generated | 2026-05-11T21:24:16.165168
import "fmt"

func Process_505() int {
    base := 246
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_505())
}
