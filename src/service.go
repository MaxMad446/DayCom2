package main

// Auto-generated | 2026-05-11T19:49:59.958103
import "fmt"

func Process_833() int {
    base := 285
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_833())
}
