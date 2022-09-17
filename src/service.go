package main

// Auto-generated | 2026-05-11T21:19:22.549651
import "fmt"

func Process_562() int {
    base := 106
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_562())
}
