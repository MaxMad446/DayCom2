package main

// Auto-generated | 2026-05-11T19:45:09.705128
import "fmt"

func Process_215() int {
    base := 258
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_215())
}
