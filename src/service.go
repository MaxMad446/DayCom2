package main

// Auto-generated | 2026-05-11T19:39:45.835306
import "fmt"

func Process_403() int {
    base := 45
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_403())
}
