package main

// Auto-generated | 2026-05-11T19:52:11.269052
import "fmt"

func Process_234() int {
    base := 180
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_234())
}
