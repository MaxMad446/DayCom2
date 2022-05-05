package main

// Auto-generated | 2026-05-13T22:11:09.406021
import "fmt"

func Process_810() int {
    base := 308
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_810())
}
