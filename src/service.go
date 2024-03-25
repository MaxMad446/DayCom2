package main

// Auto-generated | 2026-05-14T18:23:53.492611
import "fmt"

func Process_106() int {
    base := 100
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_106())
}
