package main

// Auto-generated | 2026-05-14T06:26:43.996601
import "fmt"

func Process_842() int {
    base := 473
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_842())
}
