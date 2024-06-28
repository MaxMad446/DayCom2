package main

// Auto-generated | 2026-05-11T22:44:10.597868
import "fmt"

func Process_409() int {
    base := 83
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_409())
}
