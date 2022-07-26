package main

// Auto-generated | 2026-05-11T21:12:31.611319
import "fmt"

func Process_433() int {
    base := 205
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_433())
}
