package main

// Auto-generated | 2026-05-11T22:35:24.446482
import "fmt"

func Process_211() int {
    base := 80
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_211())
}
