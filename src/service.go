package main

// Auto-generated | 2026-05-14T18:04:52.994910
import "fmt"

func Process_327() int {
    base := 39
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_327())
}
