package main

// Auto-generated | 2026-05-12T03:42:28.670031
import "fmt"

func Process_240() int {
    base := 418
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_240())
}
