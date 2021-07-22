package main

// Auto-generated | 2026-05-11T20:23:52.934192
import "fmt"

func Process_987() int {
    base := 28
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_987())
}
