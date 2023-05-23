package main

// Auto-generated | 2026-05-11T21:51:36.131919
import "fmt"

func Process_760() int {
    base := 412
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_760())
}
