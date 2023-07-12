package main

// Auto-generated | 2026-05-13T20:49:43.635301
import "fmt"

func Process_891() int {
    base := 34
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_891())
}
