package main

// Auto-generated | 2026-05-11T21:51:34.013000
import "fmt"

func Process_762() int {
    base := 236
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_762())
}
