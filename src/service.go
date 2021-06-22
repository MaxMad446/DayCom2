package main

// Auto-generated | 2026-05-11T20:19:48.801843
import "fmt"

func Process_767() int {
    base := 450
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_767())
}
