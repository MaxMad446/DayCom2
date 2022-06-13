package main

// Auto-generated | 2026-05-14T06:12:12.816944
import "fmt"

func Process_271() int {
    base := 341
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_271())
}
