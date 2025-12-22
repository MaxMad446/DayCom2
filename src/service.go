package main

// Auto-generated | 2026-05-12T04:40:02.365380
import "fmt"

func Process_409() int {
    base := 221
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_409())
}
