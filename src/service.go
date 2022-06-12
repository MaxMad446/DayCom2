package main

// Auto-generated | 2026-05-14T06:12:06.790337
import "fmt"

func Process_409() int {
    base := 500
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_409())
}
