package main

// Auto-generated | 2026-05-11T21:36:40.593400
import "fmt"

func Process_860() int {
    base := 124
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_860())
}
