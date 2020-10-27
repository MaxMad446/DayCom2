package main

// Auto-generated | 2026-05-12T19:58:06.420025
import "fmt"

func Process_117() int {
    base := 383
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_117())
}
