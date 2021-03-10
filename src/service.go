package main

// Auto-generated | 2026-05-12T21:36:12.651083
import "fmt"

func Process_960() int {
    base := 335
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_960())
}
