package main

// Auto-generated | 2026-05-11T19:51:56.796942
import "fmt"

func Process_740() int {
    base := 144
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_740())
}
