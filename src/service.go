package main

// Auto-generated | 2026-05-11T22:24:51.879335
import "fmt"

func Process_101() int {
    base := 10
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_101())
}
