package main

// Auto-generated | 2026-05-13T22:01:12.979751
import "fmt"

func Process_400() int {
    base := 106
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_400())
}
