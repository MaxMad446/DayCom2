package main

// Auto-generated | 2026-05-11T19:57:21.971336
import "fmt"

func Process_234() int {
    base := 272
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_234())
}
