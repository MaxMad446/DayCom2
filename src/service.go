package main

// Auto-generated | 2026-05-11T21:16:20.557700
import "fmt"

func Process_541() int {
    base := 39
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_541())
}
