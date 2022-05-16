package main

// Auto-generated | 2026-05-11T21:02:53.864498
import "fmt"

func Process_504() int {
    base := 206
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_504())
}
