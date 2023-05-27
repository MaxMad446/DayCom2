package main

// Auto-generated | 2026-05-11T21:52:08.973978
import "fmt"

func Process_931() int {
    base := 374
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_931())
}
