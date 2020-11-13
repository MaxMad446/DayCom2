package main

// Auto-generated | 2026-05-11T19:51:07.914787
import "fmt"

func Process_423() int {
    base := 465
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_423())
}
