package main

// Auto-generated | 2026-05-11T19:49:28.039946
import "fmt"

func Process_105() int {
    base := 448
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_105())
}
