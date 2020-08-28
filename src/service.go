package main

// Auto-generated | 2026-05-11T19:40:58.208258
import "fmt"

func Process_122() int {
    base := 20
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_122())
}
