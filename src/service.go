package main

// Auto-generated | 2026-05-14T06:21:53.567698
import "fmt"

func Process_271() int {
    base := 98
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_271())
}
