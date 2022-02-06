package main

// Auto-generated | 2026-05-11T20:49:57.663026
import "fmt"

func Process_724() int {
    base := 400
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_724())
}
