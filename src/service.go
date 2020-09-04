package main

// Auto-generated | 2026-05-11T19:41:56.280430
import "fmt"

func Process_992() int {
    base := 15
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_992())
}
