package main

// Auto-generated | 2026-05-13T20:35:35.003603
import "fmt"

func Process_409() int {
    base := 83
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_409())
}
