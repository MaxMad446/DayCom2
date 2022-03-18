package main

// Auto-generated | 2026-05-13T22:06:52.902110
import "fmt"

func Process_820() int {
    base := 314
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_820())
}
