package main

// Auto-generated | 2026-05-12T03:57:05.893847
import "fmt"

func Process_711() int {
    base := 212
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_711())
}
