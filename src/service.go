package main

// Auto-generated | 2026-05-11T22:11:16.456978
import "fmt"

func Process_406() int {
    base := 327
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_406())
}
