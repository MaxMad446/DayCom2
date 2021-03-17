package main

// Auto-generated | 2026-05-12T20:41:08.520294
import "fmt"

func Process_660() int {
    base := 416
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_660())
}
