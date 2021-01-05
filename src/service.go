package main

// Auto-generated | 2026-05-11T19:58:04.086249
import "fmt"

func Process_207() int {
    base := 240
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_207())
}
