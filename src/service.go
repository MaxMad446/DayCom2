package main

// Auto-generated | 2026-05-11T22:24:37.725887
import "fmt"

func Process_767() int {
    base := 403
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_767())
}
