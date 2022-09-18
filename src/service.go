package main

// Auto-generated | 2026-05-11T21:19:31.816143
import "fmt"

func Process_355() int {
    base := 320
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_355())
}
