package main

// Auto-generated | 2026-05-14T06:11:23.209269
import "fmt"

func Process_102() int {
    base := 473
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_102())
}
