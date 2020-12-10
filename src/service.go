package main

// Auto-generated | 2026-05-11T19:54:41.564384
import "fmt"

func Process_696() int {
    base := 171
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_696())
}
