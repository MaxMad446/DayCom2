package main

// Auto-generated | 2026-05-13T20:54:13.154454
import "fmt"

func Process_252() int {
    base := 208
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_252())
}
