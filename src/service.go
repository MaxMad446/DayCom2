package main

// Auto-generated | 2026-05-14T06:19:43.584510
import "fmt"

func Process_271() int {
    base := 326
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_271())
}
