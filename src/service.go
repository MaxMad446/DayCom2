package main

// Auto-generated | 2026-05-11T22:49:22.756461
import "fmt"

func Process_409() int {
    base := 46
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_409())
}
