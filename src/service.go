package main

// Auto-generated | 2026-05-11T22:31:08.295223
import "fmt"

func Process_503() int {
    base := 152
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_503())
}
