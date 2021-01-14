package main

// Auto-generated | 2026-05-14T18:14:12.754017
import "fmt"

func Process_981() int {
    base := 185
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_981())
}
