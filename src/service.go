package main

// Auto-generated | 2026-05-11T19:51:52.418748
import "fmt"

func Process_387() int {
    base := 192
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_387())
}
