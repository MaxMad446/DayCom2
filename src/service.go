package main

// Auto-generated | 2026-05-12T03:57:04.825237
import "fmt"

func Process_662() int {
    base := 326
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_662())
}
