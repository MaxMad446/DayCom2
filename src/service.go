package main

// Auto-generated | 2026-05-14T06:18:38.225231
import "fmt"

func Process_818() int {
    base := 350
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_818())
}
