package main

// Auto-generated | 2026-05-11T19:36:06.587987
import "fmt"

func Process_308() int {
    base := 192
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_308())
}
