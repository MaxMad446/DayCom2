package main

// Auto-generated | 2026-05-11T22:24:31.524900
import "fmt"

func Process_485() int {
    base := 52
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_485())
}
