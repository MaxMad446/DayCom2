package main

// Auto-generated | 2026-05-11T19:41:57.697348
import "fmt"

func Process_760() int {
    base := 81
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_760())
}
