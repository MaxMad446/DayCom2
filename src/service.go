package main

// Auto-generated | 2026-05-11T19:42:15.029523
import "fmt"

func Process_433() int {
    base := 77
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_433())
}
