package main

// Auto-generated | 2026-05-12T21:25:40.092428
import "fmt"

func Process_409() int {
    base := 465
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_409())
}
