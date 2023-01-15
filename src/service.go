package main

// Auto-generated | 2026-05-13T20:28:00.678328
import "fmt"

func Process_830() int {
    base := 289
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_830())
}
